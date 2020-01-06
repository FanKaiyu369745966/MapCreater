#include "QMapWindow.h"
#include <chrono>
#include <QApplication>
#include <QDebug>
#include <QLayOut>
#include <QStatusBar>
#include <QMenuBar>
#include <QtXml>

QMapWindow::QMapWindow(QWidget* parent)
	: QMainWindow(parent)
	, m_dockObject(this)
	, m_dockAttribute(this)
	, m_dockTool(this)
	, m_toolBox(this)
	, m_toolBar(nullptr)
	, m_menuFile(nullptr)
	, m_menuView(nullptr)
	, m_menuViewRelation(nullptr)
	, m_menuTool(nullptr)
	, m_menuToolTrack(nullptr)
	, m_menuHelp(nullptr)
	, m_actionNewFile(nullptr)
	, m_actionOpenFile(nullptr)
	, m_actionSaveFile(nullptr)
	, m_actionSaveAsFile(nullptr)
	, m_actionExitFile(nullptr)
	, m_actionObjectView(nullptr)
	, m_actionAttributeView(nullptr)
	, m_actionToolView(nullptr)
	, m_actionToolBar(nullptr)
	, m_actionStatusBar(nullptr)
	, m_actionQueueView(nullptr)
	, m_actionTrafficView(nullptr)
	, m_actionRoadView(nullptr)
	, m_actionRFIDTool(nullptr)
	, m_actionWorkerTool(nullptr)
	, m_actionResterTool(nullptr)
	, m_actionChargerTool(nullptr)
	, m_actionLineTrackTool(nullptr)
	, m_actionArcTrackTool(nullptr)
	, m_actionAbout(nullptr)
	, m_butRFID(nullptr)
	, m_butLineTrack(nullptr)
	, m_butArcTrack(nullptr)
	, m_butWorker(nullptr)
	, m_butRester(nullptr)
	, m_butCharger(nullptr)
{
	//ui.setupUi(this);

	Initialize();
}

QMapWindow::~QMapWindow()
{
}

void QMapWindow::Initialize()
{
	setWindowTitle(QString::fromLocal8Bit("AGV调度系统地图制作器"));

	setMinimumSize(800, 600);

	InitMenuBar();

	InitStatusBar();

	InitToolBar();

	InitToolBox();

	InitDockWidget();

	LoadConfig();

	return;
}

void QMapWindow::InitStatusBar()
{
	QStatusBar* bar = statusBar();
	bar->addPermanentWidget(&m_labelPoint);
	bar->addPermanentWidget(&m_labelDate);

	m_labelPoint.setText("X:0,Y:0");
	m_labelDate.setText(QString::fromLocal8Bit("----/--/-- 星期- --:--:--"));

	QObject::connect(&m_timerClock, &QTimer::timeout, this, &QMapWindow::slotUpdateDateLabel);
	m_timerClock.setInterval(1000);
	m_timerClock.start();

	return;
}

void QMapWindow::InitMenuBar()
{
	QMenuBar* bar = menuBar();
	bar->setWindowState(Qt::WindowState::WindowMaximized);

	// 创建菜单
	m_menuFile = bar->addMenu(QString::fromLocal8Bit("文件(&File)"));
	m_menuView = bar->addMenu(QString::fromLocal8Bit("视图(&View)"));
	m_menuTool = bar->addMenu(QString::fromLocal8Bit("工具(&Tool)"));
	m_menuHelp = bar->addMenu(QString::fromLocal8Bit("帮助(&Help)"));

	// 创建文件菜单选项
	m_actionNewFile = m_menuFile->addAction(QString::fromLocal8Bit("新建(&New)"));
	m_actionOpenFile = m_menuFile->addAction(QString::fromLocal8Bit("打开(&Open)"));
	m_menuFile->addSeparator();
	m_actionSaveFile = m_menuFile->addAction(QString::fromLocal8Bit("保存(&Save)"));
	m_actionSaveAsFile = m_menuFile->addAction(QString::fromLocal8Bit("另存为(Save&As)"));
	m_menuFile->addSeparator();
	m_actionExitFile = m_menuFile->addAction(QString::fromLocal8Bit("退出(&Exit)"));

	// 创建视图菜单选项
	m_actionAttributeView = m_menuView->addAction(QString::fromLocal8Bit("属性窗口(&AttributeView)"));
	m_actionToolView = m_menuView->addAction(QString::fromLocal8Bit("工具列表窗口(&ToolView)"));
	m_actionObjectView = m_menuView->addAction(QString::fromLocal8Bit("对象列表窗口(&ObjectView)"));
	m_menuView->addSeparator();
	m_actionStatusBar = m_menuView->addAction(QString::fromLocal8Bit("状态栏(&StatusBar)"));
	m_actionToolBar = m_menuView->addAction(QString::fromLocal8Bit("工具栏(Tool&Bar)"));
	// 创建视图-关系网子菜单
	m_menuView->addSeparator();
	m_menuViewRelation = m_menuView->addMenu(QString::fromLocal8Bit("关系网(&Relation)"));
	m_actionQueueView = m_menuViewRelation->addAction(QString::fromLocal8Bit("队列关系(&Queue)"));
	m_actionTrafficView = m_menuViewRelation->addAction(QString::fromLocal8Bit("交通管制关系(&Traffic)"));
	m_actionRoadView = m_menuViewRelation->addAction(QString::fromLocal8Bit("路径关系(&Road)"));

	// 创建工具菜单选项
	m_actionRFIDTool = m_menuTool->addAction(QString::fromLocal8Bit("RFID地标卡(RFID&Mark)"));
	m_menuTool->addSeparator();
	m_actionWorkerTool = m_menuTool->addAction(QString::fromLocal8Bit("工作站(&Worker)"));
	m_actionResterTool = m_menuTool->addAction(QString::fromLocal8Bit("待机站(&Rester)"));
	m_actionChargerTool = m_menuTool->addAction(QString::fromLocal8Bit("充电站(&Charger)"));
	// 创建工具-磁轨子菜单
	m_menuTool->addSeparator();
	m_menuToolTrack = m_menuTool->addMenu(QString::fromLocal8Bit("磁轨(&Tack)"));
	m_actionLineTrackTool = m_menuToolTrack->addAction(QString::fromLocal8Bit("直线(&Line)"));
	m_actionArcTrackTool = m_menuToolTrack->addAction(QString::fromLocal8Bit("弧线(&Arc)"));

	// 创建帮助菜单选项
	m_actionAbout = m_menuHelp->addAction(QString::fromLocal8Bit("关于(&About)"));

	// 为选项增加动作
	m_actionAttributeView->setCheckable(true);
	m_actionToolView->setCheckable(true);
	m_actionObjectView->setCheckable(true);
	m_actionStatusBar->setCheckable(true);
	m_actionToolBar->setCheckable(true);
	m_actionQueueView->setCheckable(true);
	m_actionTrafficView->setCheckable(true);
	m_actionRoadView->setCheckable(true);

	m_actionAttributeView->setChecked(true);
	m_actionToolView->setChecked(true);
	m_actionObjectView->setChecked(true);
	m_actionStatusBar->setChecked(true);
	m_actionToolBar->setChecked(true);

	// 为选项添加快捷键
	m_actionNewFile->setShortcut(Qt::CTRL | Qt::Key_N);
	m_actionOpenFile->setShortcut(Qt::CTRL | Qt::Key_O);
	m_actionSaveFile->setShortcut(Qt::CTRL | Qt::Key_S);
	m_actionSaveAsFile->setShortcut(Qt::CTRL | Qt::Key_A);
	m_actionExitFile->setShortcut(Qt::ALT | Qt::Key_F4);

	m_actionAttributeView->setShortcut(Qt::Key_F2);
	m_actionToolView->setShortcut(Qt::Key_F3);
	m_actionObjectView->setShortcut(Qt::Key_F4);
	m_actionStatusBar->setShortcut(Qt::Key_F5);
	m_actionToolBar->setShortcut(Qt::Key_F6);
	m_actionQueueView->setShortcut(Qt::Key_F7);
	m_actionTrafficView->setShortcut(Qt::Key_F8);
	m_actionRoadView->setShortcut(Qt::Key_F9);

	m_actionRFIDTool->setShortcut(Qt::ALT | Qt::Key_M);
	m_actionWorkerTool->setShortcut(Qt::ALT | Qt::Key_W);
	m_actionResterTool->setShortcut(Qt::ALT | Qt::Key_R);
	m_actionChargerTool->setShortcut(Qt::ALT | Qt::Key_C);
	m_actionLineTrackTool->setShortcut(Qt::ALT | Qt::Key_L);
	m_actionArcTrackTool->setShortcut(Qt::ALT | Qt::Key_A);

	m_actionAbout->setShortcut(Qt::Key_F1);

	// 为选项添加提示信息
	m_actionNewFile->setStatusTip(QString::fromLocal8Bit("清除当前全部内容,并创建新的文件"));
	m_actionOpenFile->setStatusTip(QString::fromLocal8Bit("清除当前全部内容,并载入指定的文件"));
	m_actionSaveFile->setStatusTip(QString::fromLocal8Bit("保存文件至指定的路径"));
	m_actionSaveAsFile->setStatusTip(QString::fromLocal8Bit("保存文件至新的路径"));
	m_actionExitFile->setStatusTip(QString::fromLocal8Bit("退出应用程序"));

	m_actionAttributeView->setStatusTip(QString::fromLocal8Bit("显示或隐藏属性编辑器"));
	m_actionToolView->setStatusTip(QString::fromLocal8Bit("显示或隐藏工具箱窗口"));
	m_actionObjectView->setStatusTip(QString::fromLocal8Bit("显示或隐藏对象查看器"));
	m_actionStatusBar->setStatusTip(QString::fromLocal8Bit("显示或隐藏状态栏"));
	m_actionToolBar->setStatusTip(QString::fromLocal8Bit("显示或隐藏工具栏"));
	m_actionQueueView->setStatusTip(QString::fromLocal8Bit("显示或隐藏待机站队列关系"));
	m_actionTrafficView->setStatusTip(QString::fromLocal8Bit("显示或隐藏RFID地标卡交通管制关系"));
	m_actionRoadView->setStatusTip(QString::fromLocal8Bit("显示或隐藏RFID地标卡路径关系"));

	m_actionRFIDTool->setStatusTip(QString::fromLocal8Bit("创建1个RFID地标卡图标"));
	m_actionWorkerTool->setStatusTip(QString::fromLocal8Bit("创建1个工作站图标"));
	m_actionResterTool->setStatusTip(QString::fromLocal8Bit("创建1个待机站图标"));
	m_actionChargerTool->setStatusTip(QString::fromLocal8Bit("创建1个充电站图标"));
	m_actionLineTrackTool->setStatusTip(QString::fromLocal8Bit("创建1条直线磁轨"));
	m_actionArcTrackTool->setStatusTip(QString::fromLocal8Bit("创建1条弧线磁轨"));

	m_actionAbout->setStatusTip(QString::fromLocal8Bit("显示应用程序的相关信息"));

	// 为选项连接信号和槽
	QObject::connect(m_actionNewFile, &QAction::triggered, this, &QMapWindow::slotNewFile);
	QObject::connect(m_actionOpenFile, &QAction::triggered, this, &QMapWindow::slotOpenFile);
	QObject::connect(m_actionSaveFile, &QAction::triggered, this, &QMapWindow::slotSaveFile);
	QObject::connect(m_actionSaveAsFile, &QAction::triggered, this, &QMapWindow::slotSaveAsFile);
	QObject::connect(m_actionExitFile, &QAction::triggered, this, &QMapWindow::slotExit);

	QObject::connect(m_actionAttributeView, &QAction::triggered, this, &QMapWindow::slotClickAttributeView);
	QObject::connect(m_actionToolView, &QAction::triggered, this, &QMapWindow::slotClickToolView);
	QObject::connect(m_actionObjectView, &QAction::triggered, this, &QMapWindow::slotClickObjectView);
	QObject::connect(m_actionStatusBar, &QAction::triggered, this, &QMapWindow::slotClickStatusBar);
	QObject::connect(m_actionToolBar, &QAction::triggered, this, &QMapWindow::slotClickToolBar);
	QObject::connect(m_actionQueueView, &QAction::triggered, this, &QMapWindow::slotQueueView);
	QObject::connect(m_actionTrafficView, &QAction::triggered, this, &QMapWindow::slotTrafficView);
	QObject::connect(m_actionRoadView, &QAction::triggered, this, &QMapWindow::slotRoadView);

	QObject::connect(m_actionRFIDTool, &QAction::triggered, this, &QMapWindow::slotRFID);
	QObject::connect(m_actionWorkerTool, &QAction::triggered, this, &QMapWindow::slotWorker);
	QObject::connect(m_actionResterTool, &QAction::triggered, this, &QMapWindow::slotRester);
	QObject::connect(m_actionChargerTool, &QAction::triggered, this, &QMapWindow::slotCharger);
	QObject::connect(m_actionLineTrackTool, &QAction::triggered, this, &QMapWindow::slotLineTrack);
	QObject::connect(m_actionArcTrackTool, &QAction::triggered, this, &QMapWindow::slotArcTrack);

	QObject::connect(m_actionAbout, &QAction::triggered, this, &QMapWindow::slotAbout);

	return;
}

void QMapWindow::InitToolBar()
{
	m_toolBar = addToolBar(QString::fromLocal8Bit("工具栏"));

	m_toolBar->addAction(m_actionNewFile);
	m_toolBar->addAction(m_actionOpenFile);
	m_toolBar->addAction(m_actionSaveFile);
	m_toolBar->addAction(m_actionSaveAsFile);
	m_toolBar->addSeparator();
	m_toolBar->addAction(m_actionQueueView);
	m_toolBar->addAction(m_actionTrafficView);
	m_toolBar->addAction(m_actionRoadView);
	m_toolBar->addSeparator();
	m_toolBar->addAction(m_actionRFIDTool);
	m_toolBar->addAction(m_actionWorkerTool);
	m_toolBar->addAction(m_actionResterTool);
	m_toolBar->addAction(m_actionChargerTool);
	m_toolBar->addAction(m_actionLineTrackTool);
	m_toolBar->addAction(m_actionArcTrackTool);
	m_toolBar->addSeparator();

	return;
}

void QMapWindow::InitDockWidget()
{
	m_dockObject.setWindowTitle(QString::fromLocal8Bit("对象查看器(Object Inspector)"));
	m_dockTool.setWindowTitle(QString::fromLocal8Bit("工具箱(Tool Box)"));
	m_dockAttribute.setWindowTitle(QString::fromLocal8Bit("属性编辑器(Property Editor)"));

	m_dockObject.setFeatures(QDockWidget::DockWidgetFloatable | QDockWidget::DockWidgetMovable);
	m_dockTool.setFeatures(QDockWidget::DockWidgetFloatable | QDockWidget::DockWidgetMovable);
	m_dockAttribute.setFeatures(QDockWidget::DockWidgetFloatable | QDockWidget::DockWidgetMovable);

	m_dockObject.setAllowedAreas(Qt::DockWidgetArea::AllDockWidgetAreas);
	m_dockTool.setAllowedAreas(Qt::DockWidgetArea::AllDockWidgetAreas);
	m_dockAttribute.setAllowedAreas(Qt::DockWidgetArea::AllDockWidgetAreas);

	m_dockTool.setWidget(&m_toolBox);

	addDockWidget(Qt::DockWidgetArea::RightDockWidgetArea, &m_dockObject);
	addDockWidget(Qt::DockWidgetArea::RightDockWidgetArea, &m_dockAttribute);
	addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, &m_dockTool);

	return;
}

void QMapWindow::InitToolBox()
{
	QWidget* pageBase = new QWidget(this);
	QWidget* pageStation = new QWidget(this);

	QVBoxLayout* layoutBase = new QVBoxLayout(pageBase);
	QVBoxLayout* layoutStation = new QVBoxLayout(pageStation);

	m_butRFID = new QToolButton(pageBase);
	m_butLineTrack = new QToolButton(pageBase);
	m_butArcTrack = new QToolButton(pageBase);
	m_butWorker = new QToolButton(pageBase);
	m_butRester = new QToolButton(pageBase);
	m_butCharger = new QToolButton(pageBase);

	pageBase->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
	pageStation->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

	layoutBase->setMargin(0);
	layoutBase->addWidget(m_butRFID);
	layoutBase->addWidget(m_butLineTrack);
	layoutBase->addWidget(m_butArcTrack);

	layoutStation->setMargin(0);
	layoutStation->addWidget(m_butWorker);
	layoutStation->addWidget(m_butRester);
	layoutStation->addWidget(m_butCharger);

	pageBase->setLayout(layoutBase);
	pageStation->setLayout(layoutStation);

	m_toolBox.addItem(pageBase, QString::fromLocal8Bit("基础(Base)"));
	m_toolBox.addItem(pageStation, QString::fromLocal8Bit("工站(Station)"));

	m_butRFID->setDefaultAction(m_actionRFIDTool);
	m_butWorker->setDefaultAction(m_actionWorkerTool);
	m_butRester->setDefaultAction(m_actionResterTool);
	m_butCharger->setDefaultAction(m_actionChargerTool);
	m_butLineTrack->setDefaultAction(m_actionLineTrackTool);
	m_butArcTrack->setDefaultAction(m_actionArcTrackTool);

	m_butRFID->setText(QString::fromLocal8Bit("RFID地标卡(RFID Mark)"));
	m_butRFID->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
	m_butRFID->setAutoRaise(true);

	m_butLineTrack->setText(QString::fromLocal8Bit("直线磁轨(Line Track)"));
	m_butLineTrack->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
	m_butLineTrack->setAutoRaise(true);

	m_butArcTrack->setText(QString::fromLocal8Bit("弧线磁轨(Arc Track)"));
	m_butArcTrack->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
	m_butArcTrack->setAutoRaise(true);

	m_butWorker->setText(QString::fromLocal8Bit("工作站(Work Station)"));
	m_butWorker->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
	m_butWorker->setAutoRaise(true);

	m_butRester->setText(QString::fromLocal8Bit("待机站(Rest Station)"));
	m_butRester->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
	m_butRester->setAutoRaise(true);

	m_butCharger->setText(QString::fromLocal8Bit("充电站(Charge Station)"));
	m_butCharger->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
	m_butCharger->setAutoRaise(true);

	return;
}

void QMapWindow::SaveConfig()
{
	QDomDocument doc;
	//写入xml头部
	QDomProcessingInstruction instruction; //添加处理命令
	instruction = doc.createProcessingInstruction("xml", "version=\"1.0\" encoding=\"UTF-8\"");
	doc.appendChild(instruction);

	//添加根节点
	QDomElement root = doc.createElement("config");
	doc.appendChild(root);

	QDomElement win = doc.createElement("Window");	/*!< 窗口 */
	win.setAttribute("width", size().width());
	win.setAttribute("hight", size().height());
	win.setAttribute("x", x());
	win.setAttribute("y", y());

	QDomElement menu = doc.createElement("Menu");	/*!< 菜单 */
	menu.setAttribute("Object", m_actionObjectView->isChecked());
	menu.setAttribute("ToolBox", m_actionToolView->isChecked());
	menu.setAttribute("Attribute", m_actionAttributeView->isChecked());
	menu.setAttribute("StatusBar", m_actionStatusBar->isChecked());
	menu.setAttribute("ToolBar", m_actionToolBar->isChecked());
	menu.setAttribute("Queue", m_actionQueueView->isChecked());
	menu.setAttribute("Traffic", m_actionTrafficView->isChecked());
	menu.setAttribute("Road", m_actionRoadView->isChecked());

	QDomElement dockTool = doc.createElement("DockTool");			/*!< 工具箱悬浮窗 */
	QDomElement dockObject = doc.createElement("DockObject");		/*!< 对象查看器悬浮窗 */
	QDomElement dockAttribute = doc.createElement("DockAttribute");	/*!< 属性编辑器悬浮窗 */

	dockTool.setAttribute("width", m_dockTool.size().width());
	dockTool.setAttribute("hight", m_dockTool.size().height());
	dockTool.setAttribute("floating", m_dockTool.isFloating());
	dockTool.setAttribute("area", dockWidgetArea(&m_dockTool));
	dockTool.setAttribute("x", m_dockTool.x());
	dockTool.setAttribute("y", m_dockTool.y());

	dockObject.setAttribute("width", m_dockObject.size().width());
	dockObject.setAttribute("hight", m_dockObject.size().height());
	dockObject.setAttribute("floating", m_dockObject.isFloating());
	dockObject.setAttribute("area", dockWidgetArea(&m_dockObject));
	dockObject.setAttribute("x", m_dockObject.x());
	dockObject.setAttribute("y", m_dockObject.y());

	dockAttribute.setAttribute("width", m_dockAttribute.size().width());
	dockAttribute.setAttribute("hight", m_dockAttribute.size().height());
	dockAttribute.setAttribute("floating", m_dockAttribute.isFloating());
	dockAttribute.setAttribute("area", dockWidgetArea(&m_dockAttribute));
	dockAttribute.setAttribute("x", m_dockAttribute.x());
	dockAttribute.setAttribute("y", m_dockAttribute.y());

	root.appendChild(win);
	root.appendChild(menu);
	root.appendChild(dockTool);
	root.appendChild(dockObject);
	root.appendChild(dockAttribute);

	//打开或创建文件
	QString path = "Config";
	QDir dir; //相对路径、绝对路径、资源路径都可以
	if (dir.exists(path) == false && dir.mkpath(path) == false)
	{
		return;
	}

	path = "Config/config.xml";

	QFile file(path);

	if (!file.open(QFile::WriteOnly | QFile::Truncate)) //可以用QIODevice，Truncate表示清空原来的内容
	{
		return;
	}

	//输出到文件
	QTextStream out_stream(&file);
	doc.save(out_stream, 4); //缩进4格
	file.close();

	return;
}

void QMapWindow::LoadConfig()
{
	//打开或创建文件
	QFile file("Config/config.xml"); //相对路径、绝对路径、资源路径都行
	if (!file.open(QFile::ReadOnly))
	{
		return;
	}

	QDomDocument doc;
	if (!doc.setContent(&file))
	{
		file.close();
		return;
	}

	file.close();

	QDomElement root = doc.documentElement(); //返回根节点

	QDomNode node = root.firstChild(); //获得第一个子节点
	while (!node.isNull())  //如果节点不空
	{
		if (node.isElement()) //如果节点是元素
		{
			QDomElement e = node.toElement(); //转换为元素，注意元素和节点是两个数据结构，其实差不多
			qDebug() << e.tagName() << " " << e.attribute("id") << " " << e.attribute("time"); //打印键值对，tagName和nodeName是一个东西

			QString name = e.tagName();

			if (name == "Window")
			{
				move(QPoint(e.attribute("x").toInt(), e.attribute("y").toInt()));
				resize(QSize(e.attribute("width").toInt(), e.attribute("hight").toInt()));
			}
			else if (name == "Menu")
			{
				bool b = e.attribute("Object").toInt();
				if (b)
				{
					m_dockObject.show();
					m_actionObjectView->setChecked(true);
				}
				else
				{
					m_dockObject.hide();
					m_actionObjectView->setChecked(false);
				}

				b = e.attribute("Attribute").toInt();
				if (b)
				{
					m_dockAttribute.show();
					m_actionAttributeView->setChecked(true);
				}
				else
				{
					m_dockAttribute.hide();
					m_actionAttributeView->setChecked(false);
				}

				b = e.attribute("ToolBox").toInt();
				if (b)
				{
					m_dockTool.show();
					m_actionToolView->setChecked(true);
				}
				else
				{
					m_dockTool.hide();
					m_actionToolView->setChecked(false);
				}

				b = e.attribute("StatusBar").toInt();
				if (b)
				{
					statusBar()->show();
					m_actionStatusBar->setChecked(true);
				}
				else
				{
					statusBar()->hide();
					m_actionStatusBar->setChecked(false);
				}

				b = e.attribute("ToolBar").toInt();
				if (b)
				{
					m_toolBar->show();
					m_actionToolBar->setChecked(true);
				}
				else
				{
					m_toolBar->hide();
					m_actionToolBar->setChecked(false);
				}

				b = e.attribute("Queue").toInt();
				if (b)
				{
					// TODO 打开队列关系网
					m_actionQueueView->setChecked(true);
				}
				else
				{
					// TODO 关闭队列关系网
					m_actionQueueView->setChecked(false);
				}

				b = e.attribute("Traffic").toInt();
				if (b)
				{
					// TODO 打开交通管制关系网
					m_actionTrafficView->setChecked(true);
				}
				else
				{
					// TODO 关闭交通管制关系网
					m_actionTrafficView->setChecked(false);
				}

				b = e.attribute("Road").toInt();
				if (b)
				{
					// TODO 打开路径关系网
					m_actionRoadView->setChecked(true);
				}
				else
				{
					// 关闭路径关系网
					m_actionRoadView->setChecked(false);
				}
			}
			else if (name == "DockObject")
			{
				m_dockObject.setFloating(e.attribute("floating").toInt());
				m_dockObject.move(QPoint(e.attribute("x").toInt(), e.attribute("y").toInt()));
				m_dockObject.resize(QSize(e.attribute("width").toInt(), e.attribute("hight").toInt()));
				addDockWidget(static_cast<Qt::DockWidgetArea>(e.attribute("area").toInt()), &m_dockObject);
			}
			else if (name == "DockAttribute")
			{
				m_dockAttribute.setFloating(e.attribute("floating").toInt());
				m_dockAttribute.move(QPoint(e.attribute("x").toInt(), e.attribute("y").toInt()));
				m_dockAttribute.resize(QSize(e.attribute("width").toInt(), e.attribute("hight").toInt()));
				addDockWidget(static_cast<Qt::DockWidgetArea>(e.attribute("area").toInt()), &m_dockAttribute);
			}
			else if (name == "DockTool")
			{
				m_dockTool.setFloating(e.attribute("floating").toInt());
				m_dockTool.move(QPoint(e.attribute("x").toInt(), e.attribute("y").toInt()));
				m_dockTool.resize(QSize(e.attribute("width").toInt(), e.attribute("hight").toInt()));
				addDockWidget(static_cast<Qt::DockWidgetArea>(e.attribute("area").toInt()), &m_dockTool);
			}
		}

		node = node.nextSibling(); //下一个兄弟节点,nextSiblingElement()是下一个兄弟元素，都差不多
	}

	return;
}

void QMapWindow::closeEvent(QCloseEvent* event)
{
	event->ignore();

	slotExit();

	return;
}

void QMapWindow::slotUpdateDateLabel()
{
	using namespace std;
	using namespace chrono;
	system_clock::time_point tp = system_clock::now();
	time_t tt = system_clock::to_time_t(tp);
	tm* t = localtime(&tt);

	QString wDay;

	switch (t->tm_wday)
	{
	case 0:
		wDay = QString::fromLocal8Bit("日");
		break;
	case 1:
		wDay = QString::fromLocal8Bit("一");
		break;
	case 2:
		wDay = QString::fromLocal8Bit("二");
		break;
	case 3:
		wDay = QString::fromLocal8Bit("三");
		break;
	case 4:
		wDay = QString::fromLocal8Bit("四");
		break;
	case 5:
		wDay = QString::fromLocal8Bit("五");
		break;
	case 6:
		wDay = QString::fromLocal8Bit("六");
		break;
	}

	m_labelDate.setText(QString::fromLocal8Bit("%1/%2/%3 星期%4 %5:%6:%7")
		.arg(t->tm_year + 1900, 4, 10, QLatin1Char('0'))
		.arg(t->tm_mon + 1, 2, 10, QLatin1Char('0'))
		.arg(t->tm_mday, 2, 10, QLatin1Char('0'))
		.arg(wDay)
		.arg(t->tm_hour, 2, 10, QLatin1Char('0'))
		.arg(t->tm_min, 2, 10, QLatin1Char('0'))
		.arg(t->tm_sec, 2, 10, QLatin1Char('0')));

	return;
}

void QMapWindow::slotNewFile()
{
	// TODO 检测文件是否已经保存
	// 提示保存

	// TODO 清除当前内容

	return;
}

void QMapWindow::slotOpenFile()
{
	// TODO 检测文件是否已经保存
	// 提示保存

	// TODO 清除当前内容
	// TODO 加载文

	return;
}

void QMapWindow::slotSaveFile()
{
	// TODO 保存文件

	return;
}

void QMapWindow::slotSaveAsFile()
{
	// TODO 选择文件路径,并保存文件

	return;
}

void QMapWindow::slotExit()
{
	// TODO 检测文件是否已经保存
	// 提示保存

	// TODO 保存当前窗口的环境信息
	SaveConfig();

	qApp->exit(0);
	return;
}

void QMapWindow::slotClickStatusBar(bool bChecked)
{
	if (bChecked)
	{
		statusBar()->show();

		return;
	}

	statusBar()->hide();

	return;
}

void QMapWindow::slotClickToolBar(bool bChecked)
{
	if (bChecked)
	{
		m_toolBar->show();

		return;
	}

	m_toolBar->hide();

	return;
}

void QMapWindow::slotClickAttributeView(bool bChecked)
{
	if (bChecked)
	{
		m_dockAttribute.show();

		return;
	}

	m_dockAttribute.hide();

	return;
}

void QMapWindow::slotClickObjectView(bool bChecked)
{
	if (bChecked)
	{
		m_dockObject.show();

		return;
	}

	m_dockObject.hide();

	return;
}

void QMapWindow::slotClickToolView(bool bChecked)
{
	if (bChecked)
	{
		m_dockTool.show();

		return;
	}

	m_dockTool.hide();

	return;
}

void QMapWindow::slotQueueView(bool bChecked)
{
	if (bChecked)
	{
		// TODO 显示队列关系

		return;
	}

	// TODO 隐藏队列关系

	return;
}

void QMapWindow::slotTrafficView(bool bChecked)
{
	if (bChecked)
	{
		// TODO 显示交通管制关系

		return;
	}

	// TODO 隐藏交通管制关系

	return;
}

void QMapWindow::slotRoadView(bool bChecked)
{
	if (bChecked)
	{
		// TODO 显示路径关系

		return;
	}

	// TODO 隐藏路径关系

	return;
}

void QMapWindow::slotRFID(bool bChecked)
{
	// TODO 创建RFID地标卡
	qDebug() << QString::fromLocal8Bit("创建RFID地标卡图标") << endl;
	return;
}

void QMapWindow::slotWorker(bool bChecked)
{
	// TODO 创建工作站
	qDebug() << QString::fromLocal8Bit("创建工作站图标") << endl;
	return;
}

void QMapWindow::slotRester(bool bChecked)
{
	// TODO 创建待机站
	qDebug() << QString::fromLocal8Bit("创建待机站图标") << endl;
	return;
}

void QMapWindow::slotCharger(bool bChecked)
{
	// TODO 创建充电站
	qDebug() << QString::fromLocal8Bit("创建充电站图标") << endl;
	return;
}

void QMapWindow::slotLineTrack(bool bChecked)
{
	// TODO 创建直线磁轨
	qDebug() << QString::fromLocal8Bit("创建直线磁轨图标") << endl;
	return;
}

void QMapWindow::slotArcTrack(bool bChecked)
{
	// TODO 创建弧线磁轨
	qDebug() << QString::fromLocal8Bit("创建弧线磁轨图标") << endl;
	return;
}

void QMapWindow::slotAbout(bool bChecked)
{
	// TODO 弹出关于对话框

	return;
}
