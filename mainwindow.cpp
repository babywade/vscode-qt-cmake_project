#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // setWindowTitle(tr("Main Window"));

    // openAction = new QAction(QIcon("D:\\QtProjects\\vscode-qt-cmake_project\\images\\icon1.png"), tr("&Open..."), this);
    // openAction->setShortcuts(QKeySequence::Open);
    // openAction->setStatusTip(tr("Open an existing file"));
    // connect(openAction, &QAction::triggered, this, &MainWindow::open);

    // QMenu *file = menuBar()->addMenu(tr("&File"));
    // file->addAction(openAction);

    // QToolBar *toolBar = addToolBar(tr("&File"));
    // toolBar->addAction(openAction);

    // statusBar();

    // 13 对话框
    setWindowTitle(tr("Main Window"));
    openAction = new QAction(QIcon("D:\\QtProjects\\vscode-qt-cmake_project\\images\\icon1.png"), tr("&Open..."), this);
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an existing file"));
    connect(openAction, &QAction::triggered, this, &MainWindow::open);
    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);
    QToolBar *toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::open()
{
    // QMessageBox::information(this, tr("Information"), tr("Open"));

    // 无parent指针，任务栏显示
    // QDialog dialog;
    // dialog.setWindowTitle(tr("Hello, dialog!"));
    // dialog.exec();

    // 有parent指针，任务栏不显示
    QDialog dialog(this);
    dialog.setWindowTitle(tr("Hello, dialog!"));
    dialog.exec();
}