#include "mainwindow.h"

#include <QCoreApplication>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include "newspaper.h"
#include "reader.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // mainwindow
    MainWindow w;
    w.show();

    // label测试
    // QLabel label("Hello, world"); // 调用构造函数，java写法
    // label.show();
    // QLabel *label = new QLabel("Hello, world"); c++原生写法，存在内存泄漏，label指针未回收
    // label->show();

    // 信号槽测试
    // QPushButton button("Quit");
    // QObject::connect(&button, &QPushButton::clicked, &QApplication::quit);
    // button.show();

    // 观察者模式测试 newspaper.h reader.h
    // QCoreApplication app(argc, argv);
    // Newspaper newspaper("Newspaper A");
    // Reader reader;
    // QObject::connect(&newspaper, &Newspaper::newPaper,
    //                  &reader,    &Reader::receiveNewspaper);
    // newspaper.send();
    // return app.exec();

    return a.exec();


}
