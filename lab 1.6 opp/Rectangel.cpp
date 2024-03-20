#include "Rectangel.h"

void Rectangel::Pair::setFirst(double f) { first = f; }
double Rectangel::Pair::getFirst() const { return first; }

void Rectangel::Pair::setSecond(double s) { second = s; }
double Rectangel::Pair::getSecond() const { return second; }

bool Rectangel::Pair::init(double f, double s) {
    setFirst(f);
    setSecond(s);
    return true;
}
void Rectangel::Pair::Read()
{
    double a, b;
    do {
        cout << "Enter the pair of numbers" << endl;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
    } while (!init(a, b));
}
void Rectangel::Pair::Display() const
{
    cout << endl;
    cout << "First number = " << getFirst() << endl;
    cout << "Second number = " << getSecond() << endl;
    cout << "Pair: (" << first << ", " << second << ")" << endl;
    cout << endl;
}

string Rectangel::Pair::toString() const {
    stringstream sout;
    sout << "(" << first << ", " << second << ")";
    return sout.str();
}

double Rectangel::Pair::getProduct(Pair t) {
    return t.first * t.second;
}

void Rectangel::setSides(double a, double b) { sides.init(a, b); }
Rectangel::Pair Rectangel::getSides() const { return sides; }

void Rectangel::init(double a, double b) { setSides(a, b); }

void Rectangel::read() {
    cout << "Katety:" << endl;
    sides.Read();
}

void Rectangel::display() const {
    cout << "Your katety: ";
    sides.Display();
    cout << endl;
}

double Rectangel::getPerumetr() const {
    double a = sides.getFirst();
    double b = sides.getSecond();
    return (2 * a + 2 * b);
}

double Rectangel::getArea() const {
    double a = sides.getFirst();
    double b = sides.getSecond();
    return a * b;
}
