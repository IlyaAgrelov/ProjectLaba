#include "widget.h"
#include "ui_widget.h"
#include <QGraphicsScene>
#include "myobject.h"
#include <QDebug>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
   QGraphicsScene *scene = new QGraphicsScene();
   ui->graphicsView->setScene(scene);
   scene->setSceneRect(0,0,ui->graphicsView->rect().width(),ui->graphicsView->rect().height());
   MyObject *object = new MyObject();
   scene->addItem(object);
   ui->graphicsView->update();
}
