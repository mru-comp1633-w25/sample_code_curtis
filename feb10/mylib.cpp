#include "mylib.h"
#include <iostream>

void getline_demo() {    
    char hi[32] = "this has spaces\0";
    cout << hi << endl;
    hi[4] = '!';
    cout << hi << endl;
    // hi = "Hello"; can't do this
    strcpy(hi, "Hello");

    char name[32];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hi, " << name << endl;
    cin.get(); // read the newline
    cout << "Enter your name: ";
    cin.getline(name, 32);
    cout << "Hi, " << name << endl;
}
