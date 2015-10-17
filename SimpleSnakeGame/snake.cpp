
#include "snake.h"

#include <iostream>

using namespace std;

Snake::Snake(){
    this->posX = 100;
    this->posY = 100;
    this->radius = 10;
    this->movingSteps = 1;
}

Snake::Snake(double x, double y, int r){
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

void Snake::grow(){}

void Snake::move(){
    this->posX += 0.02;
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

double Snake::getPosX() const
{
    return posX;
}

void Snake::setPosX(double value)
{
   posX = value;
}

double Snake::getPosY() const
{
    return posY;
}

void Snake::setPosY(double value)
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

double Snake::getMovingSteps() const
{
    return movingSteps;
}

void Snake::setMovingSteps(double value)
{
    movingSteps = value;
}


