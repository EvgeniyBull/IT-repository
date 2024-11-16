#include <iostream>
using namespace std;

int minValue(int a, int b);
int minReference(const int& a, const int& b);

int main()
{
	int num1, num2;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	cout << "Minimum value (by value): " << minValue(num1, num2) << endl;

	cout << "Minimum value (by reference): " << minReference(num1, num2) << endl;

	return 0;
}

int minValue(int a, int b)
{
	return (a < b) ? a : b;
}

int minReference(const int& a, const int& b)
{
	return (a < b) ? a : b;
}