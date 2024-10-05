#include <iostream>
using namespace std;

int main() {
    int first, second;


    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;

    cout << "Address of the first number: " << &first << endl;
    cout << "The address of the second number: " << &second << endl;

    cout << "Values from " << first << " to " << second << " with a minus sign: " << endl;
    if (first < second) {
        for (int i = first; i <= second; ++i) {
            cout << -i << " ";
        }
    }
    else {
        for (int i = first; i >= second; --i) {
            cout << -i << " ";
        }
    }
    cout << endl;

    return 0;
}
