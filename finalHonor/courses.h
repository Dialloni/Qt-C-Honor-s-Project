#ifndef COURSES_H
#define COURSES_H

#include <QDialog>
#include "coursedetail.h"

namespace Ui {
class Courses;
}

class Courses : public QDialog
{
    Q_OBJECT

public:
    explicit Courses(QWidget *parent = nullptr);
    ~Courses();

private slots:
    void on_pushButton_clicked();

    void on_courseSelected_clicked();

private:
    Ui::Courses *ui;
    CourseDetail * Course;
};

#endif // COURSES_H
