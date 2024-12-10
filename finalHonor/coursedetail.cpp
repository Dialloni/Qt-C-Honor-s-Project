#include "coursedetail.h"
#include "ui_coursedetail.h"

CourseDetail::CourseDetail(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CourseDetail)
{
    ui->setupUi(this);
}

CourseDetail::~CourseDetail()
{
    delete ui;
}

void CourseDetail::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.w3schools.com/cpp/", QUrl::TolerantMode));

}


void CourseDetail::on_CourseDownload_clicked()
{
    QDesktopServices::openUrl(QUrl("https://cplusplus.com/doc/tutorial/#google_vignette", QUrl::TolerantMode));
}


void CourseDetail::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("https://en.cppreference.com/w/", QUrl::TolerantMode));
}

