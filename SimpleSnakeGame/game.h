#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QKeyEvent>
#include <QWidget>
#include <QtGui>

#include "field.h"
#include "snake.h"
namespace Ui {
class Game;
}

class Game : public QMainWindow
{
    Q_OBJECT

protected:
    void paintEvent(QPaintEvent *e);



public:
    explicit Game(QWidget *parent = 0);
    ~Game();
    void keyPressEvent(QKeyEvent * event);
    void createField();
    void createSnake();



private:
    bool gameIsRunning;
    Ui::Game *ui;
    Field *field;
    Snake *snake;


};

#endif // GAME_H
