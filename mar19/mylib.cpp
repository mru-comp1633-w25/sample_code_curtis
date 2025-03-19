#include "mylib.h"
#include <iostream>
using namespace std;

CTime::CTime() : hours(0), minutes(0), seconds(0) {
    cout << "I'm being constructed!\n";
//    on_the_heap = new int;
}

CTime::CTime(int h, int m, int s) {
//    on_the_heap = new int;
    set(h, m, s);
    cout << "Constructed with values!\n";
}

CTime::~CTime() {
//    delete on_the_heap;
    cout << "I'm being destroyed!\n";
}

void CTime::write(std::ostream &out) const {
    out << "This instance located at: " << this << endl;
    out << hours << ":" << minutes << ":" << seconds;

// Generally  not a good idea to unconstify
//  CTime * this_copy = const_cast<CTime *>(this);
//    this_copy->set(8, 0, 0);
//    hours = 8; // const, can't modify
//    set(8, 0, 0);
}

void CTime::set(int h, int m, int s) {
    // TODO: make sure time is valid
    // trivial setter to start
    hours = h;
    minutes = m;
    seconds = s;
}
    
bool CTime::operator < (const CTime &other) const {
    return (hours < other.hours
        || (hours == other.hours &&
            minutes < other.minutes)
        || (hours == other.hours &&
            minutes == other.minutes &&
            seconds < other.seconds));
}        
    
