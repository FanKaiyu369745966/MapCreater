/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNewFile;
    QAction *actionOpenFile;
    QAction *actionSaveFile;
    QAction *actionSaveAs;
    QAction *actionExit;
    QAction *actionAttribute;
    QAction *actionObject;
    QAction *actionTool;
    QAction *actionToolBar;
    QAction *actionStatusBar;
    QAction *actionRFID;
    QAction *actionWorker;
    QAction *actionRester;
    QAction *actionCharger;
    QAction *actionLine;
    QAction *actionArc;
    QAction *actionAbout;
    QAction *actionRoad;
    QAction *actionTraffic;
    QAction *actionQueue;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuRelation;
    QMenu *menuTool;
    QMenu *menuTrack;
    QMenu *menuHelp;
    QDockWidget *dockToolBox;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *toolBase;
    QVBoxLayout *verticalLayout;
    QToolButton *tButRFID;
    QToolButton *tButTrackLine;
    QToolButton *tButTrackArc;
    QWidget *toolStation;
    QVBoxLayout *verticalLayout_2;
    QToolButton *tButWorker;
    QToolButton *tButRester;
    QToolButton *tButCharger;
    QDockWidget *dockObjectView;
    QWidget *dockWidgetContents_4;
    QHBoxLayout *horizontalLayout_2;
    QTreeView *treeObjectView;
    QDockWidget *dockAttributeView;
    QWidget *dockWidgetContents_5;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableAttribute;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 720);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setSizeIncrement(QSize(0, 0));
        MainWindow->setBaseSize(QSize(0, 0));
        MainWindow->setAutoFillBackground(false);
        actionNewFile = new QAction(MainWindow);
        actionNewFile->setObjectName(QString::fromUtf8("actionNewFile"));
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QString::fromUtf8("actionOpenFile"));
        actionSaveFile = new QAction(MainWindow);
        actionSaveFile->setObjectName(QString::fromUtf8("actionSaveFile"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAttribute = new QAction(MainWindow);
        actionAttribute->setObjectName(QString::fromUtf8("actionAttribute"));
        actionAttribute->setCheckable(true);
        actionAttribute->setChecked(true);
        actionObject = new QAction(MainWindow);
        actionObject->setObjectName(QString::fromUtf8("actionObject"));
        actionObject->setCheckable(true);
        actionObject->setChecked(true);
        actionTool = new QAction(MainWindow);
        actionTool->setObjectName(QString::fromUtf8("actionTool"));
        actionTool->setCheckable(true);
        actionTool->setChecked(true);
        actionToolBar = new QAction(MainWindow);
        actionToolBar->setObjectName(QString::fromUtf8("actionToolBar"));
        actionToolBar->setCheckable(true);
        actionToolBar->setChecked(true);
        actionStatusBar = new QAction(MainWindow);
        actionStatusBar->setObjectName(QString::fromUtf8("actionStatusBar"));
        actionStatusBar->setCheckable(true);
        actionStatusBar->setChecked(true);
        actionRFID = new QAction(MainWindow);
        actionRFID->setObjectName(QString::fromUtf8("actionRFID"));
        actionWorker = new QAction(MainWindow);
        actionWorker->setObjectName(QString::fromUtf8("actionWorker"));
        actionRester = new QAction(MainWindow);
        actionRester->setObjectName(QString::fromUtf8("actionRester"));
        actionCharger = new QAction(MainWindow);
        actionCharger->setObjectName(QString::fromUtf8("actionCharger"));
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionArc = new QAction(MainWindow);
        actionArc->setObjectName(QString::fromUtf8("actionArc"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionRoad = new QAction(MainWindow);
        actionRoad->setObjectName(QString::fromUtf8("actionRoad"));
        actionRoad->setCheckable(true);
        actionTraffic = new QAction(MainWindow);
        actionTraffic->setObjectName(QString::fromUtf8("actionTraffic"));
        actionTraffic->setCheckable(true);
        actionQueue = new QAction(MainWindow);
        actionQueue->setObjectName(QString::fromUtf8("actionQueue"));
        actionQueue->setCheckable(true);
        actionQueue->setChecked(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout_4->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuRelation = new QMenu(menuView);
        menuRelation->setObjectName(QString::fromUtf8("menuRelation"));
        menuTool = new QMenu(menubar);
        menuTool->setObjectName(QString::fromUtf8("menuTool"));
        menuTrack = new QMenu(menuTool);
        menuTrack->setObjectName(QString::fromUtf8("menuTrack"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        dockToolBox = new QDockWidget(MainWindow);
        dockToolBox->setObjectName(QString::fromUtf8("dockToolBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockToolBox->sizePolicy().hasHeightForWidth());
        dockToolBox->setSizePolicy(sizePolicy);
        dockToolBox->setMinimumSize(QSize(160, 143));
        dockToolBox->setMaximumSize(QSize(524287, 524287));
        dockToolBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        dockToolBox->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        sizePolicy.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(dockWidgetContents);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setCursor(QCursor(Qt::ArrowCursor));
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setFrameShadow(QFrame::Plain);
        toolBase = new QWidget();
        toolBase->setObjectName(QString::fromUtf8("toolBase"));
        toolBase->setGeometry(QRect(0, 0, 145, 66));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBase->sizePolicy().hasHeightForWidth());
        toolBase->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(toolBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tButRFID = new QToolButton(toolBase);
        tButRFID->setObjectName(QString::fromUtf8("tButRFID"));
        sizePolicy1.setHeightForWidth(tButRFID->sizePolicy().hasHeightForWidth());
        tButRFID->setSizePolicy(sizePolicy1);
        tButRFID->setToolButtonStyle(Qt::ToolButtonIconOnly);
        tButRFID->setAutoRaise(true);

        verticalLayout->addWidget(tButRFID);

        tButTrackLine = new QToolButton(toolBase);
        tButTrackLine->setObjectName(QString::fromUtf8("tButTrackLine"));
        sizePolicy1.setHeightForWidth(tButTrackLine->sizePolicy().hasHeightForWidth());
        tButTrackLine->setSizePolicy(sizePolicy1);
        tButTrackLine->setAutoRaise(true);

        verticalLayout->addWidget(tButTrackLine);

        tButTrackArc = new QToolButton(toolBase);
        tButTrackArc->setObjectName(QString::fromUtf8("tButTrackArc"));
        sizePolicy1.setHeightForWidth(tButTrackArc->sizePolicy().hasHeightForWidth());
        tButTrackArc->setSizePolicy(sizePolicy1);
        tButTrackArc->setAutoRaise(true);

        verticalLayout->addWidget(tButTrackArc);

        toolBox->addItem(toolBase, QString::fromUtf8("\345\237\272\347\241\200(Base)"));
        toolStation = new QWidget();
        toolStation->setObjectName(QString::fromUtf8("toolStation"));
        toolStation->setGeometry(QRect(0, 0, 160, 66));
        sizePolicy1.setHeightForWidth(toolStation->sizePolicy().hasHeightForWidth());
        toolStation->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(toolStation);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tButWorker = new QToolButton(toolStation);
        tButWorker->setObjectName(QString::fromUtf8("tButWorker"));
        sizePolicy1.setHeightForWidth(tButWorker->sizePolicy().hasHeightForWidth());
        tButWorker->setSizePolicy(sizePolicy1);
        tButWorker->setAutoRaise(true);

        verticalLayout_2->addWidget(tButWorker);

        tButRester = new QToolButton(toolStation);
        tButRester->setObjectName(QString::fromUtf8("tButRester"));
        sizePolicy1.setHeightForWidth(tButRester->sizePolicy().hasHeightForWidth());
        tButRester->setSizePolicy(sizePolicy1);
        tButRester->setAutoRaise(true);

        verticalLayout_2->addWidget(tButRester);

        tButCharger = new QToolButton(toolStation);
        tButCharger->setObjectName(QString::fromUtf8("tButCharger"));
        sizePolicy1.setHeightForWidth(tButCharger->sizePolicy().hasHeightForWidth());
        tButCharger->setSizePolicy(sizePolicy1);
        tButCharger->setAutoRepeat(false);
        tButCharger->setAutoExclusive(false);
        tButCharger->setAutoRaise(true);

        verticalLayout_2->addWidget(tButCharger);

        toolBox->addItem(toolStation, QString::fromUtf8("\345\267\245\347\253\231(Station)"));

        horizontalLayout->addWidget(toolBox);

        dockToolBox->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockToolBox);
        dockObjectView = new QDockWidget(MainWindow);
        dockObjectView->setObjectName(QString::fromUtf8("dockObjectView"));
        dockObjectView->setContextMenuPolicy(Qt::DefaultContextMenu);
        dockObjectView->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeObjectView = new QTreeView(dockWidgetContents_4);
        treeObjectView->setObjectName(QString::fromUtf8("treeObjectView"));

        horizontalLayout_2->addWidget(treeObjectView);

        dockObjectView->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockObjectView);
        dockAttributeView = new QDockWidget(MainWindow);
        dockAttributeView->setObjectName(QString::fromUtf8("dockAttributeView"));
        dockAttributeView->setContextMenuPolicy(Qt::DefaultContextMenu);
        dockAttributeView->setFloating(false);
        dockAttributeView->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        horizontalLayout_3 = new QHBoxLayout(dockWidgetContents_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        tableAttribute = new QTableWidget(dockWidgetContents_5);
        tableAttribute->setObjectName(QString::fromUtf8("tableAttribute"));

        horizontalLayout_3->addWidget(tableAttribute);

        dockAttributeView->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockAttributeView);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setAutoFillBackground(true);
        statusBar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuTool->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNewFile);
        menuFile->addAction(actionOpenFile);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveFile);
        menuFile->addAction(actionSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addAction(actionAttribute);
        menuView->addAction(actionObject);
        menuView->addAction(actionTool);
        menuView->addAction(actionToolBar);
        menuView->addAction(actionStatusBar);
        menuView->addAction(menuRelation->menuAction());
        menuRelation->addAction(actionRoad);
        menuRelation->addAction(actionTraffic);
        menuRelation->addAction(actionQueue);
        menuTool->addAction(actionRFID);
        menuTool->addAction(actionWorker);
        menuTool->addAction(actionRester);
        menuTool->addAction(actionCharger);
        menuTool->addAction(menuTrack->menuAction());
        menuTrack->addAction(actionLine);
        menuTrack->addAction(actionArc);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AGV\345\234\260\345\233\276\345\210\266\344\275\234\345\231\250", nullptr));
#if QT_CONFIG(statustip)
        MainWindow->setStatusTip(QCoreApplication::translate("MainWindow", "AGV\345\234\260\345\233\276\345\210\266\344\275\234\345\231\250V3.0", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        MainWindow->setWhatsThis(QCoreApplication::translate("MainWindow", "\346\220\255\351\205\215AGV\350\260\203\345\272\246\347\263\273\347\273\237\344\275\277\347\224\250\347\232\204\345\234\260\345\233\276\347\216\257\345\242\203\345\210\266\344\275\234\345\231\250\345\272\224\347\224\250\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(whatsthis)
        actionNewFile->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&New)", nullptr));
#if QT_CONFIG(statustip)
        actionNewFile->setStatusTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\275\223\345\211\215\347\232\204\345\206\205\345\256\271\357\274\214\345\271\266\346\226\260\345\273\272\344\270\200\344\270\252\347\251\272\347\231\275\347\232\204\345\234\260\345\233\276\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionNewFile->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\272\216\346\226\260\345\273\272\345\234\260\345\233\276\346\226\207\344\273\266\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionNewFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&Open)", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenFile->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(Open)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionOpenFile->setStatusTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\275\223\345\211\215\345\206\205\345\256\271\357\274\214\345\271\266\345\212\240\350\275\275\346\226\260\347\232\204\346\226\207\344\273\266\345\206\205\345\256\271", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionOpenFile->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\272\216\345\212\240\350\275\275\346\226\260\347\232\204\346\226\207\344\273\266\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionOpenFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveFile->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(&Save)", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveFile->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(Save)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSaveFile->setStatusTip(QCoreApplication::translate("MainWindow", "\345\260\206\345\275\223\345\211\215\347\232\204\345\206\205\345\256\271\344\277\235\345\255\230\350\207\263\346\214\207\345\256\232\347\232\204\346\226\207\344\273\266\345\206\205", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionSaveFile->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\344\277\235\345\255\230\345\206\205\345\256\271\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionSaveFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(Save&As)", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(SaveAs)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSaveAs->setStatusTip(QCoreApplication::translate("MainWindow", "\345\260\206\345\275\223\345\211\215\345\206\205\345\256\271\344\277\235\345\255\230\350\207\263\346\226\260\347\232\204\346\226\207\344\273\266\345\206\205", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionSaveAs->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\260\206\345\275\223\345\211\215\347\232\204\345\206\205\345\256\271\344\277\235\345\255\230\350\207\263\346\226\260\347\232\204\346\226\207\344\273\266\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(&Exit)", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(Exit)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionExit->setStatusTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\345\272\224\347\224\250\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionExit->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\351\200\200\345\207\272\347\250\213\345\272\217\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAttribute->setText(QCoreApplication::translate("MainWindow", "\345\261\236\346\200\247\347\252\227\345\217\243(&Attribute)", nullptr));
#if QT_CONFIG(tooltip)
        actionAttribute->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\236\346\200\247\347\252\227\345\217\243(Attribute)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionAttribute->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\261\236\346\200\247\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionAttribute->setWhatsThis(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\261\236\346\200\247\347\252\227\345\217\243\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionAttribute->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionObject->setText(QCoreApplication::translate("MainWindow", "\345\257\271\350\261\241\347\252\227\345\217\243(&Object)", nullptr));
#if QT_CONFIG(tooltip)
        actionObject->setToolTip(QCoreApplication::translate("MainWindow", "\345\257\271\350\261\241\347\252\227\345\217\243(Object)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionObject->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\257\271\350\261\241\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionObject->setWhatsThis(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\257\271\350\261\241\347\252\227\345\217\243\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionObject->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTool->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\347\252\227\345\217\243(&Tool)", nullptr));
#if QT_CONFIG(tooltip)
        actionTool->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\347\252\227\345\217\243(Tool)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionTool->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\267\245\345\205\267\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionTool->setWhatsThis(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\267\245\345\205\267\347\252\227\345\217\243\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionTool->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToolBar->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\346\240\217(&ToolBar)", nullptr));
#if QT_CONFIG(tooltip)
        actionToolBar->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\346\240\217(ToolBar)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionToolBar->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\267\245\345\205\267\346\240\217", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionToolBar->setWhatsThis(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\267\245\345\205\267\346\240\217\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionToolBar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStatusBar->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217(&StatusBar)", nullptr));
#if QT_CONFIG(tooltip)
        actionStatusBar->setToolTip(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217(StatusBar)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionStatusBar->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\347\212\266\346\200\201\346\240\217", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionStatusBar->setWhatsThis(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\347\212\266\346\200\201\346\240\217\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionStatusBar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRFID->setText(QCoreApplication::translate("MainWindow", "\345\234\260\346\240\207\345\215\241(&RFID)", nullptr));
#if QT_CONFIG(tooltip)
        actionRFID->setToolTip(QCoreApplication::translate("MainWindow", "\345\234\260\346\240\207\345\215\241(RFID)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionRFID->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\344\270\252RFID\345\234\260\346\240\207\345\215\241\345\233\276\346\240\207", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionRFID->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272RFID\345\234\260\346\240\207\345\215\241\345\233\276\346\240\207\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionRFID->setShortcut(QCoreApplication::translate("MainWindow", "Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWorker->setText(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\347\253\231(&Worker)", nullptr));
#if QT_CONFIG(tooltip)
        actionWorker->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\347\253\231(Worker)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionWorker->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\344\270\252\345\267\245\344\275\234\347\253\231\345\233\276\346\240\207", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionWorker->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272\345\267\245\344\275\234\347\253\231\345\233\276\346\240\207\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionWorker->setShortcut(QCoreApplication::translate("MainWindow", "Alt+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRester->setText(QCoreApplication::translate("MainWindow", "\345\276\205\346\234\272\347\253\231(&Rester)", nullptr));
#if QT_CONFIG(tooltip)
        actionRester->setToolTip(QCoreApplication::translate("MainWindow", "\345\276\205\346\234\272\347\253\231(Rester)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionRester->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\344\270\252\345\276\205\346\234\272\347\253\231\345\233\276\346\240\207", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionRester->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272\345\276\205\346\234\272\347\253\231\345\233\276\346\240\207\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionRester->setShortcut(QCoreApplication::translate("MainWindow", "Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCharger->setText(QCoreApplication::translate("MainWindow", "\345\205\205\347\224\265\347\253\231(&Charger)", nullptr));
#if QT_CONFIG(tooltip)
        actionCharger->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\205\347\224\265\347\253\231(Charger)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionCharger->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\344\270\252\345\205\205\347\224\265\347\253\231\345\233\276\346\240\207", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionCharger->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272\345\205\205\347\224\265\347\253\231\345\233\276\346\240\207\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionCharger->setShortcut(QCoreApplication::translate("MainWindow", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLine->setText(QCoreApplication::translate("MainWindow", "\347\233\264\347\272\277(&Line)", nullptr));
#if QT_CONFIG(tooltip)
        actionLine->setToolTip(QCoreApplication::translate("MainWindow", "\347\233\264\347\272\277(Line)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionLine->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\346\235\241\347\233\264\347\272\277\347\243\201\350\275\250", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionLine->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272\347\233\264\347\272\277\347\243\201\350\275\250\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionLine->setShortcut(QCoreApplication::translate("MainWindow", "Alt+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionArc->setText(QCoreApplication::translate("MainWindow", "\345\274\247\347\272\277(&Arc)", nullptr));
#if QT_CONFIG(tooltip)
        actionArc->setToolTip(QCoreApplication::translate("MainWindow", "\345\274\247\347\272\277(Arc)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionArc->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\346\235\241\345\274\247\347\272\277\347\243\201\350\275\250", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionArc->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272\345\274\247\347\272\277\347\243\201\350\275\250\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionArc->setShortcut(QCoreApplication::translate("MainWindow", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216(&About)", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216(About)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionAbout->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\272\224\347\224\250\347\250\213\345\272\217\350\257\264\346\230\216\344\277\241\346\201\257", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionAbout->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\346\230\276\347\244\272\345\272\224\347\224\250\347\250\213\345\272\217\350\257\264\346\230\216\344\277\241\346\201\257\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRoad->setText(QCoreApplication::translate("MainWindow", "\350\267\257\345\276\204\345\205\263\347\263\273(&Road)", nullptr));
#if QT_CONFIG(statustip)
        actionRoad->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\234\260\346\240\207\345\215\241\344\271\213\351\227\264\347\232\204\350\267\257\345\276\204\345\205\263\347\263\273\345\233\276", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionRoad->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\234\260\346\240\207\345\215\241\344\271\213\351\227\264\347\232\204\350\267\257\345\276\204\345\205\263\347\263\273\345\233\276", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionRoad->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTraffic->setText(QCoreApplication::translate("MainWindow", "\344\272\244\351\200\232\347\256\241\345\210\266\345\205\263\347\263\273(&Traffic)", nullptr));
#if QT_CONFIG(statustip)
        actionTraffic->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\234\260\346\240\207\345\215\241\344\271\213\351\227\264\347\232\204\344\272\244\351\200\232\347\256\241\345\210\266\345\205\263\347\263\273\345\233\276", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionTraffic->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\234\260\346\240\207\345\215\241\344\271\213\351\227\264\347\232\204\344\272\244\351\200\232\347\256\241\345\210\266\345\205\263\347\263\273\345\233\276", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionTraffic->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQueue->setText(QCoreApplication::translate("MainWindow", "\351\230\237\345\210\227\345\205\263\347\263\273(&Queue)", nullptr));
#if QT_CONFIG(statustip)
        actionQueue->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\210\226\351\232\220\350\227\217\345\276\205\346\234\272\347\253\231\344\271\213\351\227\264\347\232\204\351\230\237\345\210\227\345\205\263\347\263\273\345\233\276", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionQueue->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Q", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(statustip)
        widget->setStatusTip(QCoreApplication::translate("MainWindow", "\345\234\260\345\233\276\347\273\230\345\210\266\345\214\272\345\237\237", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        widget->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\347\273\230\345\210\266\345\234\260\345\233\276\347\232\204\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(whatsthis)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&File)", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276(&View)", nullptr));
        menuRelation->setTitle(QCoreApplication::translate("MainWindow", "\345\205\263\347\263\273\350\247\206\345\233\276(&Relation)", nullptr));
        menuTool->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267(&Tool)", nullptr));
        menuTrack->setTitle(QCoreApplication::translate("MainWindow", "\347\243\201\350\275\250(&Track)", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(&Help)", nullptr));
        dockToolBox->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\347\252\227\345\217\243(Tool View)", nullptr));
#if QT_CONFIG(tooltip)
        tButRFID->setToolTip(QCoreApplication::translate("MainWindow", "\345\234\260\346\240\207\345\215\241(RFID)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tButRFID->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\344\270\252RFID\345\234\260\346\240\207\345\215\241\345\233\276\346\240\207", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        tButRFID->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272RFID\345\234\260\346\240\207\345\215\241\345\233\276\346\240\207\347\232\204\346\214\211\351\222\256", nullptr));
#endif // QT_CONFIG(whatsthis)
        tButRFID->setText(QCoreApplication::translate("MainWindow", "RFID\345\234\260\346\240\207\345\215\241(RFID Mark)", nullptr));
#if QT_CONFIG(tooltip)
        tButTrackLine->setToolTip(QCoreApplication::translate("MainWindow", "\347\233\264\347\272\277\347\243\201\350\275\250(Line)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tButTrackLine->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\346\235\241\347\233\264\347\272\277\347\243\201\350\275\250", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        tButTrackLine->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272\347\233\264\347\272\277\347\243\201\350\275\250\347\232\204\346\214\211\351\222\256", nullptr));
#endif // QT_CONFIG(whatsthis)
        tButTrackLine->setText(QCoreApplication::translate("MainWindow", "\347\233\264\347\272\277\347\243\201\350\275\250(Line Track)", nullptr));
#if QT_CONFIG(tooltip)
        tButTrackArc->setToolTip(QCoreApplication::translate("MainWindow", "\345\274\247\347\272\277\347\243\201\350\275\250(Arc)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tButTrackArc->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\346\235\241\345\274\247\347\272\277\347\243\201\350\275\250", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        tButTrackArc->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272\345\274\247\347\272\277\347\243\201\350\275\250\347\232\204\346\214\211\351\222\256", nullptr));
#endif // QT_CONFIG(whatsthis)
        tButTrackArc->setText(QCoreApplication::translate("MainWindow", "\345\274\247\347\272\277\347\243\201\350\275\250(Arc Track)", nullptr));
        toolBox->setItemText(toolBox->indexOf(toolBase), QCoreApplication::translate("MainWindow", "\345\237\272\347\241\200(Base)", nullptr));
#if QT_CONFIG(tooltip)
        tButWorker->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\347\253\231(Worke Station)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tButWorker->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\344\270\252\345\267\245\344\275\234\347\253\231\345\233\276\346\240\207", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        tButWorker->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272\345\267\245\344\275\234\347\253\231\345\233\276\346\240\207\347\232\204\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(whatsthis)
        tButWorker->setText(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\347\253\231(Work Station)", nullptr));
#if QT_CONFIG(tooltip)
        tButRester->setToolTip(QCoreApplication::translate("MainWindow", "\345\276\205\346\234\272\347\253\231(Rest Station)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tButRester->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\344\270\252\345\276\205\346\234\272\347\253\231\345\233\276\346\240\207", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        tButRester->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272\345\276\205\346\234\272\347\253\231\345\233\276\346\240\207\347\232\204\346\214\211\351\222\256", nullptr));
#endif // QT_CONFIG(whatsthis)
        tButRester->setText(QCoreApplication::translate("MainWindow", "\345\276\205\346\234\272\347\253\231(Rest Station)", nullptr));
#if QT_CONFIG(tooltip)
        tButCharger->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\205\347\224\265\347\253\231(Charge Station)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tButCharger->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\2721\344\270\252\345\205\205\347\224\265\347\253\231\345\233\276\346\240\207", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        tButCharger->setWhatsThis(QCoreApplication::translate("MainWindow", "\347\224\250\344\273\245\345\210\233\345\273\272\345\205\205\347\224\265\347\253\231\345\233\276\346\240\207\347\232\204\346\214\211\351\222\256", nullptr));
#endif // QT_CONFIG(whatsthis)
        tButCharger->setText(QCoreApplication::translate("MainWindow", "\345\205\205\347\224\265\347\253\231(Charger Station)", nullptr));
        toolBox->setItemText(toolBox->indexOf(toolStation), QCoreApplication::translate("MainWindow", "\345\267\245\347\253\231(Station)", nullptr));
        dockObjectView->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\257\271\350\261\241\347\252\227\345\217\243(Object View)", nullptr));
#if QT_CONFIG(statustip)
        treeObjectView->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\275\223\345\211\215\345\214\205\345\220\253\347\232\204\346\211\200\346\234\211\345\233\276\346\240\207\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(statustip)
        dockAttributeView->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\261\236\346\200\247\347\252\227\345\217\243(Attribute View)", nullptr));
#if QT_CONFIG(statustip)
        tableAttribute->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\233\276\346\240\207\347\232\204\350\257\246\347\273\206\345\261\236\346\200\247\344\277\241\346\201\257", nullptr));
#endif // QT_CONFIG(statustip)
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
