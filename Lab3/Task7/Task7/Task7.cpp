#include <iostream>
#include <string>
#include <cmath>

using namespace std;
// Task 1
int sum(int a, int b);
double sum(double a, double b);
string sum(const string& a, const string& b);
// Task 2
int minValue(int a, int b);
int minReference(const int& a, const int& b);
// Task 3
double area(double side);
double area(double length, double width);
double area(double radius, bool isCircle);
double area(double a, double b, double c);
// Task 4
void swapByValue(int a, int b);
void swapByReference(int& a, int& b);
// Task 5
int factorial(int num);
// Task 6
void drawSquare(int size);

void callAllFunctions();



int main()
{
    callAllFunctions();
    return 0;
}

int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
string sum(const string& a, const string& b) { return a + b; }

int minValue(int a, int b) { return (a < b) ? a : b; }
int minReference(const int& a, const int& b) { return (a < b) ? a : b; }

double area(double side) { return side * side; }
double area(double length, double width) { return length * width; }
double areaCircle(double radius) { double Pi = 3.14; return Pi * radius * radius; }
double areaTriangle(double base, double height) { return 0.5 * base * height; }

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

void drawSquare(int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void callAllFunctions()
{
    cout << "Sum of integers: " << sum(14, 52) << endl;
    cout << "Sum of doubles: " << sum(77.7, 3.14) << endl;
    cout << "Sum of strings: " << sum("Evgeniy", "Bull") << endl;

    int a = 3, b = 7;
    cout << "Min by value: " << minValue(a, b) << endl;
    cout << "Min by reference: " << minReference(a, b) << endl;

    cout << "Area of square: " << area(7.0) << endl;
    cout << "Area of rectangle: " << area(8.0, 2.0) << endl;
    cout << "Area of circle: " << areaCircle(7.7) << endl;
    cout << "Area of triangle: " << areaTriangle(5.0, 3.0) << endl;

    int x = 13, y = 45;
    cout << "Before swap (by reference): x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swap (by reference): x = " << x << ", y = " << y << endl;

    int n = 7;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;

    cout << "Square of stars:" << endl;
    drawSquare(4);
}