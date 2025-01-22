#include "mylib.h"
#include <iostream>
using namespace std;

void test_some_calc();    

int main() {
    test_some_calc();
    return 0;
}


void test_some_calc() {
    cout << "do_some_calc(3, 2): "
         << do_some_calc(3, 2) << endl;
    cout << "do_some_calc(3, 0): "
         << do_some_calc(3, 0) << endl;
}
