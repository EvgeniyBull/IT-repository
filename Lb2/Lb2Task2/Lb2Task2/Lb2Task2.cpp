#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int firstyear, secondyear;
	int difference;
	int every10 = 0;
	cout << "Prinr first year: ";
	cin >> firstyear;
	cout << "Prinr second year: ";
	cin >> secondyear;
	while (true) {
		
		if (firstyear > 0 && secondyear > 0 && secondyear > firstyear) {
			break;
		}
		else {
			cout << "Error" << endl;
		}

		difference = secondyear - firstyear;
		cout << "First year: " << firstyear << endl;
		cout << "Second year: " << secondyear << endl;
		cout << "Number of years in between: " << difference << endl;

		if (difference > 100) {
			cout << "The program exits. The number of years is more than 100" << endl;
			return 0;
		}

		for (int i = 1; i <= difference; i++) {
			if (i % 10 == 0) {
				every10++;
			}
		}

		cout << "Number of years that are multiples of 10: " << every10 << endl;

		return 0;
	}
}