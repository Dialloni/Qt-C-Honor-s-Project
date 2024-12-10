#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "login.h"
#include <QFile>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_register_2_clicked()
{
    {
        QString name = ui->userN->text();
        QString password = ui->passW->text();

        // Basic validation (can be enhanced)
        if (name.isEmpty() || password.isEmpty()) {
            QMessageBox::warning(this, "Input Error", "All fields are required!");
            return;
        }

        registeredUsername = name;
        registeredPassword = password;

        // Save to file
        QFile file("/Users/abubakardiallo/Desktop/Qt/finalHonor/userdata.txt");
        if (file.open(QIODevice::WriteOnly)) {
            QTextStream out(&file);
            out << registeredUsername << "\n" << registeredPassword;
            file.close();
        }

        // Simulate successful registration
        QMessageBox::information(this, "Registration", "Registration Successful!");
    }

    hide();
    Login = new login(this);
    Login->setRegisteredUser(registeredUsername, registeredPassword);  // Pass registered credentials
    Login->show();
}

