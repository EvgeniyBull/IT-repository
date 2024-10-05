#include <iostream>
using namespace std;
int main() {
    int n;
    int parnasuma = 0, neparnasuma = 0, allsuma = 0;
    cout << "Input n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        allsuma += i; 

        if (i % 2 == 0) {
            parnasuma += i;
        }
        else {
            neparnasuma += i;
        }
    }

    cout << "Even numbers from 1 to " << n << ": ";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }


    cout << endl << "Sum of even numbers: " << parnasuma << endl;
    cout << "Sum of odd numbers: " << neparnasuma << endl;
    cout << "The total sum of all numbers: " << allsuma << endl;

    double result = (parnasuma + neparnasuma + allsuma) / 2.0;
    cout << "The final result: " << result << endl;

    return 0;
}
