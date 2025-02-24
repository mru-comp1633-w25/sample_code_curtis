#include "mylib.h"
#include <iostream>
using namespace std;

void foo(int arr[]) {
}

int main() {
    int x[2][2] = {{1, 2}, {3, 4}};
    cout << x << endl;
    foo(x[0]);

    // trigger a seg fault
//    x[10000000][0] = 5;
    
    int a = 10;
    int *p;// = nullptr;
// also a segfault maybe
//    *p = 10;
//    cout << *p << endl;
//    *a = 10;
//    *p = 5;
    // probably a segfault
    p = &a;
    int *p2 = p;

    // try to make p2 point to p (type mismatch)
//    p2 = &p;

    foo(p);

    cout << "a: " << a << endl;
    cout << "p: " << p << endl;
    cout << "p2: " << p2 << endl;
    *p2 = 5;
    *p++;
    cout << "*p: " << *p << endl;
    cout << "a: " << a << endl;
    
    return 0;
}
