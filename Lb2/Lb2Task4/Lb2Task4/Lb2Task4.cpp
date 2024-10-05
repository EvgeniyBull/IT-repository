#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number n: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << ": ";

    for (int num = 2; num <= n; num++) {
        bool prime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
