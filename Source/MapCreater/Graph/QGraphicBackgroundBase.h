#ifndef QGRAPHICBACKGROUNDBASE_H
#define QGRAPHICBACKGROUNDBASE_H

#include <QObject>
#include <QPainter>

typedef class QGraphicBackgroundBase QGraphicBkBase;

static const float MAX_SCALE = 4.0f;     /*!< 最大缩放比例 */
static const float MIN_SCALE = 0.1f;     /*!< 最小缩放比例 */
static const float DEFAULT_SCALE = 1.0f; /*!< 默认缩放比例 */

/*!
 * @class QGraphicBackgroundBase
 * @brief 背景图基类
 * @date 2019-12-24
 * @author FanKaiyu
 */
class QGraphicBackgroundBase : public QObject
{
	Q_OBJECT
public:
	explicit QGraphicBackgroundBase(const float& scale = DEFAULT_SCALE, const QPoint& offset = QPoint(0, 0), QObject* parent = nullptr);
	explicit QGraphicBackgroundBase(const QRect& win, const QString& path = "background.jpg", const uint& distance = 10u, const float& scale = DEFAULT_SCALE, const QPoint& offset = QPoint(0, 0), QObject* parent = nullptr);

protected:
	float m_fScale;     /*!< 缩放比例 */
	QPoint m_ptOffset;  /*!< 偏移量 */
	uint m_unDistance;  /*!< 图线间距 */
	QSize m_sizeBk;     /*!< 背景图尺寸 */
	QRect m_rectWin;    /*!< 窗口区域 */
	QImage m_pImage;    /*!< 背景图 */
protected:
	/*!
	 * @brief 初始化
	 * @date 2019-12-24
	 * @author FanKaiyu
	 * @param const uint& 图线间距
	 * @param const float& 缩放比例
	 * @param const QPoint& 偏移量
	 */
	void Initialize(const QRect& win, const QString& path, const uint& distance, const float& scale, const QPoint& offset);
public:
	/*!
	 * @brief 设置背景图片
	 * @date 2019-12-24
	 * @author FanKaiyu
	 * @param const QString& 背景图路径
	 */
	void SetImage(const QString& path);

	/*!
	 * @brief 设置窗口的尺寸
	 * @date 2019-12-24
	 * @author FanKaiyu
	 * @param const QRect& 窗口区域
	 */
	void SetWinSize(const QRect& rect);

	/*!
	 * @brief 设置位移量
	 * @date 2019-12-24
	 * @author FanKaiyu
	 * @param const QPoint& 位移量
	 */
	void SetOffset(const QPoint& offset);

	/*!
	 * @brief 放大
	 * @date 2019-12-24
	 * @author FanKaiyu
	 */
	void ZoomIn(const float& scale = 0.0f);

	/*!
	 * @brief 缩小
	 * @date 2019-12-24
	 * @author FanKaiyu
	 */
	void ZoomOut(const float& scale = 0.0f);

	/*!
	 * @brief 复位
	 * @date 2019-12-24
	 * @author FanKaiyu
	 */
	void Reset();

	/*!
	 * @brief 将地图坐标转换为窗口坐标
	 * @date 2019-12-24
	 * @author FanKaiyu
	 * @param const QPoint& 地图坐标
	 * @return QPoint 窗口坐标
	 */
	QPoint ToWinPoint(const QPoint& point) const;

	/*!
	 * @brief 将窗口坐标转换为地图坐标
	 * @date 2019-12-24
	 * @author FanKaiyu
	 * @param const QPoint& 窗口坐标
	 * @return QPoint 地图坐标
	 */
	QPoint ToMapPoint(const QPoint& point) const;

	/*!
	 * @brief 绘制背景图
	 * @date 2019-12-24
	 * @author FanKaiyu
	 * @param QPainter&
	 */
	void Draw(QPainter& painter);
protected:
	/*!
	 * @brief 设置缩放比例
	 * @date 2019-12-24
	 * @author FanKaiyu
	 * @param 缩放比例
	 */
	void SetScale(const float& scale);
signals:

public slots:
};

#endif // QGRAPHICBACKGROUNDBASE_H
