#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "login.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

   explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_register_2_clicked();

private:
    Ui::MainWindow *ui;
    login *Login;

    QString registeredUsername;  // Store registered username
    QString registeredPassword;  // Store registered password
};
#endif // MAINWINDOW_H