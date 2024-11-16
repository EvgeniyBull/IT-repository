#include <iostream>
using namespace std;

void swapWithoutTemp(int* a, int* b);

int main() {
	int x = 52, y = 34;
	cout << "Before swap: x = " << x << ", y = " << y << endl;
	swapWithoutTemp(&x, &y);
	cout << "After swap: x = " << x << ", y = " << y << endl;
	return 0;
}

void swapWithoutTemp(int* a, int* b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}