#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a;
	setlocale(0, ".1251");
	cout << "Input a: ";
	cin >> a;
	float d = a / 7;
	cout << "Ostacha: " << d << endl;
	int b, c;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;
	if (b % c == 0) {
		cout << "Дiлиться без остачi" << endl;
	}
	else {
		cout << "Дiлиться з остачою" << endl;
	}
	if (b % 2 == 0) {
		cout << "Число 1 є парним" << endl;
	}
	else {
		cout << "Число 1 є непарним" << endl;
	}
	if (c % 2 == 0) {
		cout << "Число 2 є парним" << endl;
	}
	else {
		cout << "Число 2 є непарним" << endl;
	}
	return 0;

}
