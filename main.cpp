#include "mainwindow.h"

#include <QCoreApplication>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>
#include "newspaper.h"
#include "reader.h"

int main(int argc, char *argv[])
{
    // QApplication a(argc, argv);
    // mainwindow
    // MainWindow w;
    // w.show();

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

    // 布局管理器测试
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Enter your age");
    QSpinBox *spinBox = new QSpinBox(&window);
    QSlider *slider = new QSlider(Qt::Horizontal, &window);
    spinBox->setRange(0, 130);
    slider->setRange(0, 130);
    QObject::connect(slider, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);
    void (QSpinBox:: *spinBoxSignal)(int) = &QSpinBox::valueChanged;
    QObject::connect(spinBox, spinBoxSignal, slider, &QSlider::setValue);
    spinBox->setValue(35);
    QHBoxLayout *layout = new QHBoxLayout; // 按照水平方向从左到右布局的布局管理器
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    window.setLayout(layout);
    window.show();
    return app.exec();

    // return a.exec();
}
