#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsPixmapItem>

class MyObject: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    MyObject();
public slots:
    void move();
private:
    double s = 0.01;
};



#endif // MYOBJECT_H
