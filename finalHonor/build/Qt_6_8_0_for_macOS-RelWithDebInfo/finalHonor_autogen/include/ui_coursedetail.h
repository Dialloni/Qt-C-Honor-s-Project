/********************************************************************************
** Form generated from reading UI file 'coursedetail.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEDETAIL_H
#define UI_COURSEDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CourseDetail
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *CourseDownload;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CourseDetail)
    {
        if (CourseDetail->objectName().isEmpty())
            CourseDetail->setObjectName("CourseDetail");
        CourseDetail->resize(600, 416);
        CourseDetail->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 214, 255);"));
        label_2 = new QLabel(CourseDetail);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 70, 111, 31));
        label_3 = new QLabel(CourseDetail);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 201, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-weight: 5px;"));
        CourseDownload = new QPushButton(CourseDetail);
        CourseDownload->setObjectName("CourseDownload");
        CourseDownload->setGeometry(QRect(10, 220, 181, 31));
        CourseDownload->setStyleSheet(QString::fromUtf8("color: orange;\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 5px;"));
        label = new QLabel(CourseDetail);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 200, 61, 16));
        label->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight: 5px;"));
        pushButton = new QPushButton(CourseDetail);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 150, 91, 21));
        pushButton->setStyleSheet(QString::fromUtf8("color: green;\n"
"background-color: white;\n"
"font-size: 15px;\n"
"border-radius: 5px;\n"
""));
        label_4 = new QLabel(CourseDetail);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 130, 61, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-weight: 5px;"));
        label_5 = new QLabel(CourseDetail);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 270, 91, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-weight: 15px;"));
        pushButton_2 = new QPushButton(CourseDetail);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 290, 100, 32));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: red;\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 5px;"));

        retranslateUi(CourseDetail);

        QMetaObject::connectSlotsByName(CourseDetail);
    } // setupUi

    void retranslateUi(QDialog *CourseDetail)
    {
        CourseDetail->setWindowTitle(QCoreApplication::translate("CourseDetail", "Dialog", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("CourseDetail", "Free Website for Practicing C++", nullptr));
        CourseDownload->setText(QCoreApplication::translate("CourseDetail", "Beginner and Intermediate", nullptr));
        label->setText(QCoreApplication::translate("CourseDetail", "Cplusplus  ", nullptr));
        pushButton->setText(QCoreApplication::translate("CourseDetail", "Beginner", nullptr));
        label_4->setText(QCoreApplication::translate("CourseDetail", "W3School ", nullptr));
        label_5->setText(QCoreApplication::translate("CourseDetail", "Cpprefernance ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CourseDetail", "Advance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseDetail: public Ui_CourseDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEDETAIL_H
