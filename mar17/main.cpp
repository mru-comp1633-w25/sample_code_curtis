#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    say_hi();

    CTime now; // = {10, 37, 00};
    now.set(10, 47, 00);

    CTime *later = new CTime;
    later->set(5, 0, 0);

    
//    now.hours = 10; // can't do this, hours is private
    now.write(cout);
    cout << endl;
    later->write(cout);
    cout << endl;

    delete later;
    
    return 0;
}
