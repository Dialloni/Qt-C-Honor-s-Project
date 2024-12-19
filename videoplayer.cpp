#include "videoplayer.h"
#include "ui_videoplayer.h"

videoplayer::videoplayer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::videoplayer)
{
    ui->setupUi(this);
}

videoplayer::~videoplayer()
{
    delete ui;
}
