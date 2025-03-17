#include "mylib.h"
#include <iostream>
using namespace std;

void say_hi() {
    cout << "Hi!\n";
}

void CTime::write(std::ostream &out) {
    out << "This instance located at: " << this << endl;
    out << hours << ":" << minutes << ":" << seconds;
}

void CTime::set(int h, int m, int s) {
    // TODO: make sure time is valid
    // trivial setter to start
    hours = h;
    minutes = m;
    seconds = s;
}
    
