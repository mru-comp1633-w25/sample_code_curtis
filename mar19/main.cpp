#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    CTime now(10, 32, 0); // calls the constructor
    CTime *later = new CTime; // also calls the constructor
    now.write(cout);
    cout << endl;
    later->write(cout);
    cout << endl;

    if (now < *later) {
        cout << "Success!\n";
    } else {
        cout << "huh?\n";
    }

    
//    cout << "now == later:"
//         << now.compare(later) << endl;
//         << (now == later) << endl;

    delete later;
    
    return 0;
}
