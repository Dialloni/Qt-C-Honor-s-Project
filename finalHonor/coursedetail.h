#ifndef COURSEDETAIL_H
#define COURSEDETAIL_H

#include <QDialog>
#include <QUrl>
#include <QDesktopServices>


namespace Ui {
class CourseDetail;
}

class CourseDetail : public QDialog
{
    Q_OBJECT

public:
    explicit CourseDetail(QWidget *parent = nullptr);
    ~CourseDetail();

private slots:
    void on_pushButton_clicked();

    void on_CourseDownload_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CourseDetail *ui;
};

#endif // COURSEDETAIL_H
