#include <iostream>
#include "Rectangel.h"

using namespace std;

int main() {
    Rectangel katety;

    katety.read();
    katety.display();
    cout << "P = ";
    cout << katety.getPerumetr() << std::endl;
    cout << "S = ";
    cout << katety.getArea() << std::endl;

    return 0;
}
