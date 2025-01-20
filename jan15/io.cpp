#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age in years: ";
    cin >> age;

    char initial;
    cout << "Enter your initial: ";
    cin >> initial;

    int year;
    cout << "Enter your program year: ";
    cin >> year;

    cout << "Hi " << initial << "!\n";
    cout << "You're " << age << " years old!\n";
    cout << "You were " << (age - year) << " when you started.\n";
    return 0;
}
