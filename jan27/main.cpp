#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    demo_single_line(x);
// int num_records, total_time;
    // cout << "Enter the num records and total time: ";
    // cin >> num_records >> total_time;
    // cout << "Timed out: " << timed_out(total_time, num_records) <<
    //     endl;
    return 0;
}

void test_bool() {
    bool b;
    cout << "Enter true or false: ";
    cin >> b;
    cout << "You entered: " << b << endl;

    // booleans as integers example
    int some_var = 7;
    int some_other = some_var * (some_var > 0);
}
