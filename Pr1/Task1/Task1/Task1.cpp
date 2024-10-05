#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0, ".1251");
	int d, sh;
	float p, s;
	cout << "Введiть ширину прямокутника: ";
	cin >> sh;
	cout << "Введiть довжину прямокутника: ";
	cin >> d;
	p = sh * 2 + d * 2;
	s = sh * d;
	cout << "Периметр прямокутника: " << p << " та його площа: " << s << endl;
	float sum, dob, cha, ri;
	sum = p + s;
	dob = p * s;
	cha = p / s;
	ri = p - s;
	cout << "Добуток: " << dob << endl;
	cout << "Сума: " << sum << endl;
	cout << "Частка: " << cha << endl;
	cout << "Рiзниця: " << ri << endl;
	cout << &d << endl;
	cout << &sh << endl;
	cout << &p << endl;
	cout << &s << endl;
	cout << &sum << endl;
	cout << &dob << endl;
	cout << &cha << endl;
	cout << &ri << endl;
}
