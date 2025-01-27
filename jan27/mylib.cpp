#include "mylib.h"
#include <iostream>
using namespace std;

void demo_single_line(int x) {
    if (x > 0)
        cout << "x is positive\n";
    else
        cout << "x is negative\n";
        cout << "This is part of the else statement\n";
}

bool timed_out(int total_time, int num_records) {
    // short circuit eval to protect against divide by zero
    return (num_records != 0) && (total_time / num_records) > 1;
    
    // if (total_time / num_records > 1) {
    //     return true;
    // } else {
    //     return false;
    // }
}
