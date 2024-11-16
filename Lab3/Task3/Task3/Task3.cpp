#include <iostream>
#include <cmath>
using namespace std;

double area(double side);
double area(double length, double width);
double area(double radius, bool isCircle);
double area(double a, double b, double c);

int main() {
    double side = 7.0;
    cout << "Area of a square with a side " << side << " = " << area(side) << endl;

    double length = 8.0, width = 2.0;
    cout << "Area of a rectangle with sides " << length << " and " << width << " = " << area(length, width) << endl;

    double radius = 7.7;
    cout << "Area of a circle with radius " << radius << " = " << area(radius, true) << endl;

    double a = 3.0, b = 4.0, c = 5.0;
    cout << "Area of a triangle with sides " << a << ", " << b << " and " << c << " = " << area(a, b, c) << endl;

    return 0;
}

double area(double side) {
    return side * side;
}

double area(double length, double width) {
    return length * width;
}

double area(double radius, bool isCircle) {
    double Pi = 3.14;
    return Pi * radius * radius;
}

double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}