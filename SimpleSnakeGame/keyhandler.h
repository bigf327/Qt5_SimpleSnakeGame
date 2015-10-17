#ifndef KEYHANDLER_H
#define KEYHANDLER_H

#include <QGraphicsRectItem>
#include <QKeyEvent>

class KeyHandler : public QGraphicsRectItem{
public:
    KeyHandler();
     void keyPressEvent(QKeyEvent * event);

//signals:

//public slots:
};

#endif // KEYHANDLER_H
