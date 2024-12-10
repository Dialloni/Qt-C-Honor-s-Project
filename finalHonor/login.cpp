#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QTimer>
#include <QFile>
#include <QTextStream>
#include "courses.h"  // Include the header for the Courses widget

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    // Initially hide the progress bar and status label
    ui->progressBar->setVisible(false);
    ui->statusbar->clear();
}

login::~login()
{
    delete ui;
}

void login::setRegisteredUser(const QString &username, const QString &password)
{
    registeredUsername = username;
    registeredPassword = password;
}

void login::on_login_2_clicked()
{
    QString username = ui->lineEdit_user->text();   // Get the entered username
    QString password = ui->lineEdit_pass->text();   // Get the entered password

    // Basic validation: check if fields are empty
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter both username and password.");
        return;
    }

    // Show the progress bar and label text while processing
    ui->progressBar->setVisible(true);
    ui->progressBar->setValue(0);  // Reset progress bar to 0
    ui->statusbar->setText("Logging in...");  // Update text label

    // Create a QTimer to simulate login progress
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [this, username, password, timer]() {
        static int progress = 0;

        // Simulate progress (just for visual feedback)
        progress += 10;
        ui->progressBar->setValue(progress);

        // If progress reaches 100, check login credentials
        if (progress >= 100) {
            // Stop the timer once progress is complete
            timer->stop();

            // Load registered credentials from file
            QFile file("/Users/abubakardiallo/Desktop/Qt/finalHonor/userdata.txt");
            QString storedUsername;
            QString storedPassword;

            if (file.exists() && file.open(QIODevice::ReadOnly)) {
                QTextStream in(&file);
                storedUsername = in.readLine();  // Read the username from file
                storedPassword = in.readLine();  // Read the password from file
                file.close();
            } else {
                QMessageBox::warning(this, "Error", "No registered users found.");
                return;
            }

            // Perform login validation
            if (username == storedUsername && password == storedPassword) {
                QMessageBox::information(this, "Login Successful", "Welcome, " + username + "!");

                // Close the login dialog
                accept();

                // Create and show the Courses widget
                Courses *course = new Courses();  // Create the Courses widget
                course->show();  // Show the Courses dialog
            } else {
                QMessageBox::warning(this, "Login Failed", "Incorrect username or password.");
            }

            // Hide the progress bar after the login check
            ui->progressBar->setVisible(false);
            ui->statusbar->clear();
        }
    });

    // Start the timer to simulate progress
    timer->start(200);  // Update progress every 200ms
}
