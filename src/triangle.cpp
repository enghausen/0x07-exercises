#include "triangle.h"
#include <iostream>
#include <cmath>

// Default constructor
Triangle::Triangle() : a(1), b(1), c(1) {}

// Constructor med parametre
Triangle::Triangle(double a, double b, double c) {
    if (!setSides(a, b, c)) {
        this->a = this->b = this->c = 1; // fallback til gyldig trekant
    }
}

// Hjælpefunktion: Tjek om trekant er valid
bool Triangle::isValid(double a, double b, double c) const {
    return (a > 0 && b > 0 && c > 0 &&
            a + b > c &&
            a + c > b &&
            b + c > a);
}

// Setter for alle sider
bool Triangle::setSides(double a, double b, double c) {
    if (isValid(a, b, c)) {
        this->a = a;
        this->b = b;
        this->c = c;
        return true;
    }
    return false;
}

// Getters
double Triangle::getA() const { return a; }
double Triangle::getB() const { return b; }
double Triangle::getC() const { return c; }

// Setters
void Triangle::setA(double a) { setSides(a, this->b, this->c); }
void Triangle::setB(double b) { setSides(this->a, b, this->c); }
void Triangle::setC(double c) { setSides(this->a, this->b, c); }

// Perimeter
double Triangle::perimeter() const {
    return a + b + c;
}

// Area med Herons formel
double Triangle::area() const {
    double s = perimeter() / 2.0;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

// Print
void Triangle::print() const {
    std::cout << "Triangle with sides a=" << a << ", b=" << b << ", c=" << c << std::endl;
}
