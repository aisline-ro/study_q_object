#include <QCoreApplication>
#include "A.h"
#include "B.h"
#include "C.h"
#include <QTimer>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    A a;
    B b;
    C c;

    QTimer::singleShot(0, &app, &QCoreApplication::quit);

    return app.exec();
}
