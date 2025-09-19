#include "B.h"
#include "A.h"
#include <iostream>

B::B() : QObject(nullptr) {A a; std::cout << "B !" << std::endl;}
