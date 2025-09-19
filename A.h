#pragma once
#include <QObject>
#include <iostream>

class A  : public QObject {
    Q_OBJECT
public:
    A() : QObject(nullptr) {std::cout << "A !" << std::endl;}
};
