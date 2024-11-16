#include <iostream>
#include <cmath>
using namespace std;
int main() {
setlocale(0, ".1251");
int x;
cout << "Input x: ";
cin >> x;
cout << x++ << endl;
x--;
cout << x << endl;
++x;
cout << x << endl;
--x;
cout << x << endl;
return 0;
}
