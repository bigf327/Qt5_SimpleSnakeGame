#include "field.h"

Field::Field(){

}

Field::Field(int startX, int startY, int widht, int height){
    this->startPointX = startX;
    this->startPointY = startY;
    this->fieldWidthX = widht;
    this->fieldHeightY = height;
}

int Field::getTop(){
    return this->startPointX;
}

int Field::getLeft(){
    return this->startPointY;
}

int Field::getRight(){
    return this->fieldWidthX;
}

int Field::getDown(){
    return this->fieldHeightY;
}

int Field::getStartPointX() const
{
    return startPointX;
}

void Field::setStartPointX(int value)
{
    startPointX = value;
}

int Field::getStartPointY() const
{
    return startPointY;
}

void Field::setStartPointY(int value)
{
    startPointY = value;
}

int Field::getFieldWidthX() const
{
    return fieldWidthX;
}

void Field::setFieldWidthX(int value)
{
    fieldWidthX = value;
}

int Field::getFieldHeightY() const
{
    return fieldHeightY;
}

void Field::setFieldHeightY(int value)
{
    fieldHeightY = value;
}


