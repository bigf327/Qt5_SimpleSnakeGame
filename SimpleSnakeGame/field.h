#ifndef FIELD_H
#define FIELD_H


class Field{

private:
    int startPointX;
    int startPointY;
    int fieldWidthX;
    int fieldHeightY;

public:
    Field();
    Field(int startX, int startY, int widht,  int height);
    int getTop();
    int getLeft();
    int getRight();
    int getDown();

//signals:

//public slots:

    int getStartPointX() const;
    void setStartPointX(int value);
    int getStartPointY() const;
    void setStartPointY(int value);
    int getFieldWidthX() const;
    void setFieldWidthX(int value);
    int getFieldHeightY() const;
    void setFieldHeightY(int value);
};

#endif // FIELD_H
