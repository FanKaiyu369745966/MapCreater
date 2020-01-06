/********************************************************************************
** Form generated from reading UI file 'QMapWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMAPWINDOW_H
#define UI_QMAPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QMapWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QMapWindow)
    {
        if (QMapWindow->objectName().isEmpty())
            QMapWindow->setObjectName(QString::fromUtf8("QMapWindow"));
        QMapWindow->resize(400, 300);
        menuBar = new QMenuBar(QMapWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QMapWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QMapWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QMapWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(QMapWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QMapWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QMapWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QMapWindow->setStatusBar(statusBar);

        retranslateUi(QMapWindow);

        QMetaObject::connectSlotsByName(QMapWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QMapWindow)
    {
        QMapWindow->setWindowTitle(QCoreApplication::translate("QMapWindow", "QMapWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMapWindow: public Ui_QMapWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMAPWINDOW_H
