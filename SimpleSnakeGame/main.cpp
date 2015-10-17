#include "game.h"
#include <QApplication>
#include <QRect>

int main(int argc, char *argv[]){

    QApplication a(argc, argv);
    Game w;

    int height = 550;
    int width = 525;

    w.setWindowTitle("A very simple Snake Game");
    w.setFixedSize(width,height);

    w.show();

    return a.exec();
}
