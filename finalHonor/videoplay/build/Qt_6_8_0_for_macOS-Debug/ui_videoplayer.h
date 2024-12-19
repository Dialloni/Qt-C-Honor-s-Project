/********************************************************************************
** Form generated from reading UI file 'videoplayer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYER_H
#define UI_VIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_videoplayer
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *videoplayer)
    {
        if (videoplayer->objectName().isEmpty())
            videoplayer->setObjectName("videoplayer");
        videoplayer->resize(800, 600);
        centralwidget = new QWidget(videoplayer);
        centralwidget->setObjectName("centralwidget");
        videoplayer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(videoplayer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        videoplayer->setMenuBar(menubar);
        statusbar = new QStatusBar(videoplayer);
        statusbar->setObjectName("statusbar");
        videoplayer->setStatusBar(statusbar);

        retranslateUi(videoplayer);

        QMetaObject::connectSlotsByName(videoplayer);
    } // setupUi

    void retranslateUi(QMainWindow *videoplayer)
    {
        videoplayer->setWindowTitle(QCoreApplication::translate("videoplayer", "videoplayer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class videoplayer: public Ui_videoplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_H
