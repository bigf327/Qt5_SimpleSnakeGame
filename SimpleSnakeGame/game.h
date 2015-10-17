#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QKeyEvent>
#include <QWidget>
#include <QtGui>
#include <QVector>

#include "field.h"
#include "snake.h"
#include "food.h"
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
    void getPosForFood();
    void createFood(bool value);



private:
    bool gameIsRunning;
    Ui::Game *ui;
    Field *field;
    Snake *snake;
    Food *food;

    QVector<int> foodPos;
    bool foodHasBeenHited;
    bool colidate_snake_food();


};

#endif // GAME_H
