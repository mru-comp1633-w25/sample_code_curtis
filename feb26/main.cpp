#include "mylib.h"
#include <iostream>
using namespace std;

void foo(int *&iptr) {
    int x = 42;
    iptr = &x;
}

int main() {
    int *iptr = nullptr;
    foo(iptr);
    cout << *iptr << endl; // what happens here?
    cout << "Can I make this not 42?\n";
    *iptr = 46;
    cout << *iptr << endl; // what happens here?
    foo(iptr);
    
    return 0;
}
