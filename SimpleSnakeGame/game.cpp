#include "game.h"
#include "ui_game.h"
#include <QRect>
#include <QPainter>
#include <iostream>

using namespace std;

Game::Game(QWidget *parent) :QMainWindow(parent),ui(new Ui::Game){
    ui->setupUi(this);

    this->gameIsRunning = true;

    field = new Field(10,20,500,500);
    snake = new Snake();
    snake->initSnake();

}

Game::~Game(){
    delete ui;
}

void Game::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Left){
           snake->moveLeft();
           update();
       }
       else if (event->key() == Qt::Key_Right){
           snake->moveRight();
           update();
       }
       else if (event->key() == Qt::Key_Up){
           snake->moveUp();
           update();
       }
       else if (event->key() == Qt::Key_Down){
            snake->moveDown();
            update();
       }
}

void Game::createField(){
    QRectF rectangle(field->getStartPointX(), field->getStartPointY(), field->getFieldWidthX(), field->getFieldHeightY());

    QPainter painter(this);
    painter.drawRect(rectangle);

}



void Game::createSnake(){
    QPainter painter(this);
    /*
    for(int i = 0; i < this->snake->getSnakeParts()->length(); i++){
        //painter.drawEllipse(QPointF(snake->snakeParts.at(i).getPosX(),snake->snakeParts.at(i).getPosY()),snake->snakeParts.at(i).getRadius(),snake->snakeParts.at(i).getRadius());
        painter.drawEllipse(QPointF(this->snake->getSnakeParts()->at(i).getPosX(), this->snake->getSnakeParts()->at(i).getPosY()), this->snake->getSnakeParts()->at(i).getRadius(), this->snake->getSnakeParts()->at(i).getRadius());
    }
    */
    painter.drawEllipse(QPointF(snake->getPosX(), snake->getPosY()), snake->getRadius(), snake->getRadius());
}


void Game::paintEvent(QPaintEvent *e){
   createField();
   createSnake();
}
