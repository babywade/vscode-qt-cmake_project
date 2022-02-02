# vscode-qt-cmake_project

using vscode-qt-cmake-vs2017compiler to develop projects

参考文章：

https://blog.csdn.net/weixin_43669941/article/details/108921714

本人编译kit使用vs2017 amd64

同时launch.json中配置：

`"program": "${workspaceFolder}/build/Debug/test1.exe"`

qt version: qt5.14.2

使用的qt学习资料：https://www.devbean.net/2012/08/qt-study-road-2-catelog/

程序修改后，F7重新构建项目，F5运行。

添加注释后的C2065错误：定位是vscode编辑器换行符设置错误，windows应为CRLF
