#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
string sum(const string& a, const string& b);

int main()
{
    int intA = 14, intB = 52;
    cout << "Sum of integers: " << sum(intA, intB) << endl;

    double doubleA = 77.7, doubleB = 3.14;
    cout << "Sum of floating point numbers: " << sum(doubleA, doubleB) << endl;

    string strA = "Evgeniy", strB = "Bull";
    cout << "Sum of strings: " << sum(strA, strB) << endl;

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}


string sum(const string& a, const string& b)
{
    return a + b;
}