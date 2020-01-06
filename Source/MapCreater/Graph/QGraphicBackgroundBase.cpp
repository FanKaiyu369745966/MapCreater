#include "QGraphicBackgroundBase.h"

QGraphicBackgroundBase::QGraphicBackgroundBase(const float& scale, const QPoint& offset, QObject* parent)
	: QObject(parent)
{
	Initialize(QRect(0, 0, 0, 0), "background.jpg", 10u, scale, offset);
}

QGraphicBackgroundBase::QGraphicBackgroundBase(const QRect& win, const QString& path, const uint& distance, const float& scale, const QPoint& offset, QObject* parent)
	: QObject(parent)
{
	Initialize(win, path, distance, scale, offset);
}

void QGraphicBackgroundBase::Initialize(const QRect& win, const QString& path, const uint& distance, const float& scale, const QPoint& offset)
{
	m_fScale = scale;
	m_ptOffset = offset;
	m_unDistance = distance;

	SetWinSize(win);
	SetImage(path);

	if (m_rectWin.height() == 0 || m_rectWin.width() == 0
		|| m_sizeBk.width() == 0 || m_sizeBk.height() == 0)
	{
		Reset();
	}

	return;
}

void QGraphicBackgroundBase::SetImage(const QString& path)
{
	m_pImage.load(path);

	m_sizeBk.setWidth(m_pImage.width());
	m_sizeBk.setHeight(m_pImage.height());

	Reset();

	return;
}

void QGraphicBackgroundBase::SetWinSize(const QRect& rect)
{
	m_rectWin = rect;

	return;
}

void QGraphicBackgroundBase::SetOffset(const QPoint& offset)
{
	int right = m_rectWin.width() / 2;
	int left = 0 - right;
	int bottom = m_rectWin.height() / 2;
	int top = 0 - bottom;

	if (offset.x() > right)
	{
		m_ptOffset.setX(right);
	}
	else if (offset.x() < left)
	{
		m_ptOffset.setX(left);
	}
	else
	{
		m_ptOffset.setX(offset.x());
	}

	if (offset.y() > bottom)
	{
		m_ptOffset.setY(bottom);
	}
	else if (offset.y() < top)
	{
		m_ptOffset.setY(top);
	}
	else
	{
		m_ptOffset.setY(offset.y());
	}

	return;
}

void QGraphicBackgroundBase::ZoomIn(const float& scale)
{
	if (m_rectWin.height() == 0 || m_rectWin.width() == 0
		|| m_sizeBk.width() == 0 || m_sizeBk.height() == 0)
	{
		Reset();
	}

	if (scale == 0.0f)
	{
		float tmp = m_fScale + m_fScale / 10.0f;

		if (tmp > MAX_SCALE)
		{
			return;
		}

		m_fScale = tmp;

		return;
	}

	SetScale(scale);

	return;
}

void QGraphicBackgroundBase::ZoomOut(const float& scale)
{
	if (m_rectWin.height() == 0 || m_rectWin.width() == 0
		|| m_sizeBk.width() == 0 || m_sizeBk.height() == 0)
	{
		Reset();
	}

	if (scale == 0.0f)
	{
		float tmp = m_fScale - m_fScale / 10.0f;

		if (tmp < MIN_SCALE)
		{
			return;
		}

		m_fScale = tmp;

		return;
	}

	SetScale(scale);

	return;
}

void QGraphicBackgroundBase::Reset()
{
	m_fScale = DEFAULT_SCALE;
	m_ptOffset.setX(0);
	m_ptOffset.setY(0);

	return;
}

QPoint QGraphicBackgroundBase::ToWinPoint(const QPoint& point) const
{
	int nX = point.x() * m_fScale + m_rectWin.width() / 2 + m_ptOffset.x();
	int nY = -point.y() * m_fScale + m_rectWin.height() / 2 + m_ptOffset.y();

	nX += m_rectWin.left();
	nY += m_rectWin.top();

	return QPoint(nX, nY);
}

QPoint QGraphicBackgroundBase::ToMapPoint(const QPoint& point) const
{
	float fX0 = m_rectWin.left() + m_rectWin.width() / 2.0f;    // 客户区中心X坐标
	float fY0 = m_rectWin.top() + m_rectWin.height() / 2.0f;    // 客户区中心Y坐标

	int nX = point.x() - fX0;
	int nY = fY0 - point.y();

	nX = ((nX - m_ptOffset.x()) / m_fScale);
	nY = ((nY + m_ptOffset.y()) / m_fScale);

	return QPoint(nX, nY);
}

void QGraphicBackgroundBase::Draw(QPainter& painter)
{
	QPixmap icon = QPixmap::fromImage(m_pImage);

	painter.drawPixmap(QRect(m_rectWin.left(), m_rectWin.top(), m_rectWin.width(), m_rectWin.height()), icon);

	return;
}

void QGraphicBackgroundBase::SetScale(const float& scale)
{
	if (scale == 0.0f)
	{
		return;
	}

	if (scale > MAX_SCALE)
	{
		m_fScale = MAX_SCALE;

		return;
	}

	if (scale < MIN_SCALE)
	{
		m_fScale = MIN_SCALE;

		return;
	}

	m_fScale = scale;

	return;
}
