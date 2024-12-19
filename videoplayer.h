#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class videoplayer;
}
QT_END_NAMESPACE

class videoplayer : public QMainWindow
{
    Q_OBJECT

public:
    videoplayer(QWidget *parent = nullptr);
    ~videoplayer();

private:
    Ui::videoplayer *ui;
};
#endif // VIDEOPLAYER_H
