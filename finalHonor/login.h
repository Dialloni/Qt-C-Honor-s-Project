#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "courses.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

    // Function to receive the registered username and password
    void setRegisteredUser(const QString &username, const QString &password);


private slots:
    void on_login_2_clicked();

private:
    Ui::login *ui;

    Courses * course;

    QString registeredUsername;  // Store the registered username
    QString registeredPassword;  // Store the registered password
};

#endif // LOGIN_H
