#include <iostream>
using namespace std;

void copyValue(int* source, int* destination);

int main()
{
	int a = 14, b = 69;
	copyValue(&a, &b);
	cout << "Copy value: b = " << b << endl;
	return 0;
}

void copyValue(int* source, int* destination)
{
	*destination = *source;
}