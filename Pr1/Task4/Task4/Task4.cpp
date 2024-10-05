#include <iostream>
using namespace std;
int main() {
    int age, salary;
    cout << "Your age: ";
    cin >> age;
    cout << "Your salary: ";
    cin >> salary;
    string name_surname, position;
    if (age > 20 && salary > 400 && salary < 1000) {
        cout << "We will consider your position" << endl;
        cout << "What is your name and surname?" << endl;
        cin >> name_surname;
        cout << "What is your preferred position" << endl;
        cin >> position;
        cout << "Name: " << name_surname << endl << "Position: " << position << endl << "Age: " << age << endl << "Salary: " << salary;
    }
    else {
        cout << "You are not suitable";
    }

}
