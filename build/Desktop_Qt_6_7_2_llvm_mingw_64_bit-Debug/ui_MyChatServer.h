/********************************************************************************
** Form generated from reading UI file 'MyChatServer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCHATSERVER_H
#define UI_MYCHATSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyChatServer
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyChatServer)
    {
        if (MyChatServer->objectName().isEmpty())
            MyChatServer->setObjectName("MyChatServer");
        MyChatServer->resize(800, 600);
        centralwidget = new QWidget(MyChatServer);
        centralwidget->setObjectName("centralwidget");
        MyChatServer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyChatServer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MyChatServer->setMenuBar(menubar);
        statusbar = new QStatusBar(MyChatServer);
        statusbar->setObjectName("statusbar");
        MyChatServer->setStatusBar(statusbar);

        retranslateUi(MyChatServer);

        QMetaObject::connectSlotsByName(MyChatServer);
    } // setupUi

    void retranslateUi(QMainWindow *MyChatServer)
    {
        MyChatServer->setWindowTitle(QCoreApplication::translate("MyChatServer", "MyChatServer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyChatServer: public Ui_MyChatServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCHATSERVER_H
