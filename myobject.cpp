#include "myobject.h"
#include <QTimer>
#include <QDebug>
#include <QTransform>


MyObject::MyObject(){
    setPixmap(QPixmap(":/images/spring.png"));
    setTransform(QTransform().scale(0.5,0.5));
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
}


void MyObject::move(){
    this->setTransform(QTransform().scale(0.5, 0.5 + s));
    s = s + 0.01;
}



/*void MyObject::move(){
    if((this->boundingRect().height() < 200) and (s == 1)){
        this->setRect(0,0,100,this->boundingRect().height()+10);
    } else if (this->rect().height() == 200 and s == 1){
        s = 0;
    } if ((this->boundingRect().height() > 100) and (s == 0)){
        this->setRect(0,0,100,this->boundingRect().height()-10);
    } else if (this->boundingRect().height() == 100 and s == 0){
        s = 1;
    }
}*/









