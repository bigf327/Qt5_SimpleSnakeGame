
#include "snake.h"

#include <iostream>

using namespace std;

Snake::Snake(){
    this->posX = 100;
    this->posY = 100;
    this->radius = 10;
    this->movingSteps = 2;
}

Snake::Snake(int x, int y, int r){
    this->posX = x;
    this->posY = y;
    this->radius = r;
}

void Snake::initSnake(){
/*
   this->snakeParts->push_back(Snake(posX,posY,radius));
   this->snakeParts->push_back(Snake(posX + (2*radius),posY,radius));
   this->snakeParts->push_back(Snake(posX + (4*radius),posY,radius));
   this->snakeParts->push_back(Snake(posX + (6*radius),posY,radius));
*/
}

void Snake::testVoid(){}
void Snake::grow(){}

void Snake::move(){
    this->posX += movingSteps;
}

void Snake::moveUp(){
    cout << "moveUp()" << endl;
    this->posY -= movingSteps;
}

void Snake::moveDown(){
    cout << "moveDown()" << endl;
    this->posY += movingSteps;
}

void Snake::moveLeft(){
    cout << "moveLeft()" << endl;
    this->posX -= movingSteps;
}

void Snake::moveRight(){
    cout << "moveRight()" << endl;
    this->posX += movingSteps;
}




QVector<Snake> *Snake::getSnakeParts() const
{
    return snakeParts;
}

int Snake::getPosX() const
{
    return posX;
}

void Snake::setPosX(int value)
{
   posX = value;
}

int Snake::getPosY() const
{
    return posY;
}

void Snake::setPosY(int value)
{
    posY = value;
}

int Snake::getRadius() const
{
    return radius;
}

void Snake::setRadius(int value)
{
    radius = value;
}

int Snake::getMovingSteps() const
{
    return movingSteps;
}

void Snake::setMovingSteps(int value)
{
    movingSteps = value;
}


