#ifndef SNAKE_H
#define SNAKE_H

#include <QVector>
#include <QAction>

class Snake{
private:
    double posX;
    double posY;
    int radius;
    double movingSteps;
    QVector <Snake> *snakeParts;


public:
    Snake();
    Snake(double x, double y ,int r);
    void initSnake();
    void grow();
    void move();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();


    double getPosX() const;
    void setPosX(double value);
    double getPosY() const;
    void setPosY(double value);
    int getRadius() const;
    void setRadius(int value);
    double getMovingSteps() const;
    void setMovingSteps(double value);
    QVector<Snake> *getSnakeParts() const;

//signals:

//public slots:


};

#endif // SNAKE_H
