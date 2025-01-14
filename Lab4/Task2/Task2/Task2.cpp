﻿#include <iostream>
using namespace std;

void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount);

int main() {
	int x = 68, y = 44, z = 12;
	int evenCount, oddCount;
	countEvenOdd(&x, &y, &z, &evenCount, &oddCount);
	cout << "Even: " << evenCount << ", Odd: " << oddCount << endl;
	return 0;
}

void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount) {
	*evenCount = 0;
	*oddCount = 0;

	*a % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
	*b % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
	*c % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
}