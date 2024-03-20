#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

class Rectangel{
private:
    class Pair {
    private:
        double first;
        double second;

    public:
        void setFirst(double f);
        double getFirst() const;

        void setSecond(double s);
        double getSecond() const;

        bool init(double f, double s);
        string toString() const;
        void Read();
        void Display() const;

        double getProduct(Pair t);
    };

    Pair sides;

public:
    void setSides(double a, double b);
    Pair getSides() const;

    void init(double a, double b);
    void read();
    void display() const;

    double getPerumetr() const;
    double getArea() const;
};
