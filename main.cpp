#include "videoplayer.h"
#include <QApplication>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QAudioOutput>  // Include the QAudioOutput header

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create media player and video widget
    QMediaPlayer* player = new QMediaPlayer;
    QVideoWidget* vw = new QVideoWidget;

    // Set the video output to the video widget
    player->setVideoOutput(vw);

    // Set the media source (path to the video file)
    player->setSource(QUrl::fromLocalFile("/Users/abubakardiallo/Desktop/Honor's Project/CSC 211H Project.mp4"));

    // Set the size and position of the video widget
    vw->setGeometry(100, 100, 640, 480); // Set video widget size
    vw->show();

    // Set normal playback rate (1.0 is normal speed)
    player->setPlaybackRate(1.0);

    // Set up audio output
    QAudioOutput* audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(1.0); // Set audio volume to maximum

    // Start playback
    player->play();

    // Start the event loop
    return a.exec();
}
