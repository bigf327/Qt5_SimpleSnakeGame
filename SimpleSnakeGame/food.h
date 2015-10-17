#ifndef FOOD_H
#define FOOD_H

#include <QVector>

class Food{
private:
    int posX;
    int posY;
    int radius;

public:
    Food();
    QVector<int> getRandomPosition();
/*
signals:
public slots:
*/
    int getPosX() const;
    void setPosX(int value);
    int getPosY() const;
    void setPosY(int value);
    int getRadius() const;
    void setRadius(int value);
};

#endif // FOOD_H
