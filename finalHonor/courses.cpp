#include "courses.h"
#include "ui_courses.h"


Courses::Courses(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Courses)
{
    ui->setupUi(this);
    ui->comboBox->addItem("CSC 101 and CSC 111");
    ui->comboBox->addItem("CSC 211 and CSC 211h");
    ui->comboBox->addItem("CSC 350 and CSC 350h");
    ui->comboBox->addItem("CSC 331 and CSC 331h");
}

Courses::~Courses()
{
    delete ui;
}

void Courses::on_pushButton_clicked()
{

}


void Courses::on_courseSelected_clicked()
{
    hide();
    Course = new CourseDetail(this);
    Course->show();
}

