#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double a, b, c;

    // Hjælpefunktion til at tjekke om trekant er valid
    bool isValid(double a, double b, double c) const;

public:
    // Constructors
    Triangle();
    Triangle(double a, double b, double c);

    // Settere og getters
    bool setSides(double a, double b, double c);
    double getA() const;
    double getB() const;
    double getC() const;
    void setA(double a);
    void setB(double b);
    void setC(double c);

    // Funktioner
    double perimeter() const;
    double area() const;
    void print() const;
};

#endif