/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_user;
    QLabel *label_2;
    QLineEdit *lineEdit_pass;
    QPushButton *login_2;
    QProgressBar *progressBar;
    QLabel *statusbar;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(550, 329);
        groupBox = new QGroupBox(login);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 521, 291));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 214, 255);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color:blue;"));

        verticalLayout->addWidget(label);

        lineEdit_user = new QLineEdit(groupBox);
        lineEdit_user->setObjectName("lineEdit_user");

        verticalLayout->addWidget(lineEdit_user);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: blue;"));

        verticalLayout->addWidget(label_2);

        lineEdit_pass = new QLineEdit(groupBox);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEdit_pass);

        login_2 = new QPushButton(groupBox);
        login_2->setObjectName("login_2");
        login_2->setStyleSheet(QString::fromUtf8("color: blue;\n"
""));

        verticalLayout->addWidget(login_2);

        progressBar = new QProgressBar(login);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(240, 300, 118, 23));
        progressBar->setStyleSheet(QString::fromUtf8("color: rgb(255, 64, 255);"));
        progressBar->setValue(24);
        statusbar = new QLabel(login);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(140, 300, 111, 20));
        statusbar->setStyleSheet(QString::fromUtf8("color: rgb(255, 64, 255);"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("login", "Login", nullptr));
        label->setText(QCoreApplication::translate("login", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Password", nullptr));
        login_2->setText(QCoreApplication::translate("login", "Login", nullptr));
        statusbar->setText(QCoreApplication::translate("login", "Loading..", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
