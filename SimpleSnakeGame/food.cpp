#include "food.h"

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>


using namespace std;

Food::Food(){
    this->posX = 1;
    this->posY = 1;
    this->radius = 2;
}

QVector<int> Food::getRandomPosition(){
    QVector<int> randVals;

    int xPos = rand() % 480 + 20;
    int yPos = rand() % 480 + 20;

    randVals.push_back(xPos);
    randVals.push_back(yPos);

    return randVals;
}



int Food::getPosX() const
{
    return posX;
}

void Food::setPosX(int value)
{
    posX = value;
}

int Food::getPosY() const
{
    return posY;
}

void Food::setPosY(int value)
{
    posY = value;
}

int Food::getRadius() const
{
    return radius;
}

void Food::setRadius(int value)
{
    radius = value;
}

