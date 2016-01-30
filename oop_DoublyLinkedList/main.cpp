#include "author.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    author titul;
    titul.show();

    return a.exec();
}
