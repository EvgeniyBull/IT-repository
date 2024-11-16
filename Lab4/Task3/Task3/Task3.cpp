#include <iostream>
using namespace std;

void multiply(int* a, int* b, int* result);

int main()
{
	int num1 = 5, num2 = 14, result;
	multiply(&num1, &num2, &result);
	cout << "Result: " << result << endl;
	return 0;
}

void multiply(int* a, int* b, int* result)
{
	*result = (*a) * (*b);
}