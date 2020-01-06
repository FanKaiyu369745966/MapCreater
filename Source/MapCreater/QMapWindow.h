#pragma once

#include <QMainWindow>
#include <QCloseEvent>
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QDockWidget>
#include <QLabel>
#include <QTimer>
#include <QToolBox>
#include <QToolButton>

//#include "ui_QMapWindow.h"

class QMapWindow : public QMainWindow
{
	Q_OBJECT

public:
	QMapWindow(QWidget* parent = Q_NULLPTR);
	~QMapWindow();

	//private:
	//	Ui::QMapWindow ui;

private:
	QDockWidget m_dockObject;		/*!< 显示对象列表的悬浮窗口 */
	QDockWidget m_dockAttribute;	/*!< 显示图标属性的悬浮窗口 */
	QDockWidget	m_dockTool;			/*!< 显示工具列表的悬浮窗口 */
	QToolBar* m_toolBar;			/*!< 指向工具栏的指针 */
	QToolBox m_toolBox;				/*!< 工具箱 */
private:
	QLabel m_labelPoint;			/*!< 显示坐标的标签 */
	QLabel m_labelDate;				/*!< 显示时间日期的标签 */
	QMenu* m_menuFile;				/*!< 文件菜单 */
	QMenu* m_menuView;				/*!< 视图菜单 */
	QMenu* m_menuViewRelation;		/*!< 视图-关系网子菜单 */
	QMenu* m_menuTool;				/*!< 工具菜单 */
	QMenu* m_menuToolTrack;			/*!< 工具-磁轨子菜单*/
	QMenu* m_menuHelp;				/*!< 帮助菜单 */
	QAction* m_actionNewFile;		/*!< 创建新文件 */
	QAction* m_actionOpenFile;		/*!< 打开现有文件 */
	QAction* m_actionSaveFile;		/*!< 保存文件 */
	QAction* m_actionSaveAsFile;	/*!< 另存为 */
	QAction* m_actionExitFile;		/*!< 退出应用程序 */
	QAction* m_actionObjectView;	/*!< 显示或隐藏对象列表窗口 */
	QAction* m_actionAttributeView;	/*!< 显示或隐藏属性窗口 */
	QAction* m_actionToolView;		/*!< 显示或隐藏工具列表窗口 */
	QAction* m_actionToolBar;		/*!< 显示或隐藏工具栏 */
	QAction* m_actionStatusBar;		/*!< 显示或隐藏状态栏 */
	QAction* m_actionQueueView;		/*!< 显示或隐藏队列关系 */
	QAction* m_actionTrafficView;	/*!< 显示或隐藏交通管制关系 */
	QAction* m_actionRoadView;		/*!< 显示或隐藏路径关系 */
	QAction* m_actionRFIDTool;		/*!< 创建RFID地标卡 */
	QAction* m_actionWorkerTool;	/*!< 创建工作站 */
	QAction* m_actionResterTool;	/*!< 创建待机站 */
	QAction* m_actionChargerTool;	/*!< 创建充电站 */
	QAction* m_actionLineTrackTool;	/*!< 创建直线磁轨 */
	QAction* m_actionArcTrackTool;	/*!< 创建弧线磁轨 */
	QAction* m_actionAbout;			/*!< 显示关于对话框 */
	QToolButton* m_butRFID;			/*!< RFID地标卡按钮 */
	QToolButton* m_butLineTrack;	/*!< 直线磁轨按钮 */
	QToolButton* m_butArcTrack;		/*!< 弧线磁轨按钮 */
	QToolButton* m_butWorker;		/*!< 工作站按钮 */
	QToolButton* m_butRester;		/*!< 待机站按钮 */
	QToolButton* m_butCharger;		/*!< 充电站按钮 */
private:
	QTimer m_timerClock;			/*!< 时钟计时器 */
private:
	/*!
	 * @brief 初始化窗口
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void Initialize();

	/*!
	 * @brief 初始化状态栏
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void InitStatusBar();

	/*!
	 * @brief 初始化菜单栏
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void InitMenuBar();

	/*!
	 * @brief 初始化工具栏
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void InitToolBar();

	/*!
	 * @brief 初始化悬浮窗口
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void InitDockWidget();

	/*!
	 * @brief 初始化工具箱
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void InitToolBox();

protected:
	/*!
	 * @brief 储存环境信息
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void SaveConfig();

	/*!
	 * @brief 读取环境信息
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void LoadConfig();

private:
	/*!
	 * @brief 关闭事件
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void closeEvent(QCloseEvent* event);

signals:

private slots:
	/*!
	 * @brief 更新日期标签
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotUpdateDateLabel();

	/*!
	 * @brief 点击新建选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotNewFile();

	/*!
	 * @brief 点击打开选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotOpenFile();

	/*!
	 * @brief 点击保存选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotSaveFile();

	/*!
	 * @brief 点击另存为选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotSaveAsFile();

	/*!
	 * @brief 点击退出选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotExit();

	/*!
	 * @brief 点击状态栏选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotClickStatusBar(bool bChecked);

	/*!
	 * @brief 点击工具栏选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotClickToolBar(bool bChecked);

	/*!
	 * @brief 点击属性编辑器选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotClickAttributeView(bool bChecked);

	/*!
	 * @brief 点击对象查看器选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotClickObjectView(bool bChecked);

	/*!
	 * @brief 电机工具箱选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotClickToolView(bool bChecked);

	/*!
	 * @brief 点击队列关系选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotQueueView(bool bChecked);

	/*!
	 * @brief 点击交通管制关系选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotTrafficView(bool bChecked);

	/*!
	 * @brief 点击路径关系选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotRoadView(bool bChecked);

	/*!
	 * @brief 点击RFID地标卡选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotRFID(bool bChecked);

	/*!
	 * @brief 点击工作站选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotWorker(bool bChecked);

	/*!
	 * @brief 点击待机站选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotRester(bool bChecked);

	/*!
	 * @brief 点击充电站选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotCharger(bool bChecked);

	/*!
	 * @brief 点击直线磁轨选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotLineTrack(bool bChecked);

	/*!
	 * @brief 点击弧线磁轨选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotArcTrack(bool bChecked);

	/*!
	 * @brief 点击关于选项
	 * @date 2020-01-06
	 * @author FanKaiyu
	*/
	void slotAbout(bool bChecked);
};
