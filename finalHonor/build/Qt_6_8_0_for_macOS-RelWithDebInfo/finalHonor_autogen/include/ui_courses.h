/********************************************************************************
** Form generated from reading UI file 'courses.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSES_H
#define UI_COURSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Courses
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *courseSelected;

    void setupUi(QDialog *Courses)
    {
        if (Courses->objectName().isEmpty())
            Courses->setObjectName("Courses");
        Courses->resize(661, 400);
        Courses->setStyleSheet(QString::fromUtf8("back-ground-color: white;"));
        groupBox = new QGroupBox(Courses);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(150, 60, 331, 271));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 214, 255);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        courseSelected = new QPushButton(groupBox);
        courseSelected->setObjectName("courseSelected");
        courseSelected->setStyleSheet(QString::fromUtf8("color: blue;\n"
"font-weight: 5px;"));

        horizontalLayout->addWidget(courseSelected);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Courses);

        QMetaObject::connectSlotsByName(Courses);
    } // setupUi

    void retranslateUi(QDialog *Courses)
    {
        Courses->setWindowTitle(QCoreApplication::translate("Courses", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Courses", "Choose Course", nullptr));
        courseSelected->setText(QCoreApplication::translate("Courses", "Choose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Courses: public Ui_Courses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSES_H
