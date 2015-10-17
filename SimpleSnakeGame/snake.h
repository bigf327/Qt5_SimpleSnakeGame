#ifndef SNAKE_H
#define SNAKE_H

#include <QVector>
#include <QAction>

class Snake{
private:
    int posX;
    int posY;
    int radius;
    int movingSteps;
    QVector <Snake> *snakeParts;


public:
    Snake();
    Snake(int x, int y ,int r);
    void initSnake();
    void grow();
    void move();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void testVoid();


    int getPosX() const;
    void setPosX(int value);
    int getPosY() const;
    void setPosY(int value);
    int getRadius() const;
    void setRadius(int value);
    int getMovingSteps() const;
    void setMovingSteps(int value);
    QVector<Snake> *getSnakeParts() const;

//signals:

//public slots:


};

#endif // SNAKE_H
