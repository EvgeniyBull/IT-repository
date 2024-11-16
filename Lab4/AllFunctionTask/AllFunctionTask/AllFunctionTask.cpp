#include <iostream>
using namespace std;

void copyValue(int* source, int* destination);
void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount);
void multiply(int* a, int* b, int* result);
void swapWithoutTemp(int* a, int* b);
void findMinMax(int* a, int* b, int* c, int* min, int* max);

int main() {
	// Task 1
	int a = 14, b = 69;
	copyValue(&a, &b);
	cout << "Copy value: b = " << b << endl;
	// Task 2
	int x = 68, y = 44, z = 12;
	int evenCount, oddCount;
	countEvenOdd(&x, &y, &z, &evenCount, &oddCount);
	cout << "Even: " << evenCount << ", Odd: " << oddCount << endl;
	// Task 3
	int num1 = 5, num2 = 14, result;
	multiply(&num1, &num2, &result);
	cout << "Result: " << result << endl;
	// Task 4
	int x1 = 52, y1 = 34;
	cout << "Before swap: x = " << x1 << ", y = " << y1 << endl;
	swapWithoutTemp(&x1, &y1);
	cout << "After swap: x = " << x1 << ", y = " << y1 << endl;
	// Task 5
	int x2 = 5, y2 = 15, z2 = 25, min, max;
	findMinMax(&x2, &y2, &z2, &min, &max);
	cout << "Min: " << min << ", max: " << max << endl;

	return 0;
}

void copyValue(int* source, int* destination) {
	*destination = *source;
}
void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount) {
	*evenCount = 0;
	*oddCount = 0;

	*a % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
	*b % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
	*c % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
}
void multiply(int* a, int* b, int* result) {
	*result = (*a) * (*b);
}
void swapWithoutTemp(int* a, int* b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void findMinMax(int* a, int* b, int* c, int* min, int* max) {
	*min = *max = *a;

	if (*b < *min) *min = *b;
	if (*b > *max) *max = *b;

	if (*c < *min) *min = *c;
	if (*c > *max) *max = *c;
}