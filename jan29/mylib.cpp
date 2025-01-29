#include "mylib.h"
#include <iostream>
using namespace std;


void fizzbuzz_while(int n) {
    int x = 1;              // Initialization
    int count = 0;
    while (x <= n) {      // Condition
        if (x % 3 == 0) {
            cout << "Fizz";
            ++count;
        }
        if (x % 5 == 0) {
            cout << "Buzz";
            ++count;
        }
        cout << "\n";
        x++;                // Update
    }
    cout << "Count: " << count << endl;
}

void fizzbuzz_for(int n) {
    for (int x = 1; x <= n; x++) {
        if (x % 3 == 0)
            cout << "Fizz";
        if (x % 5 == 0)
            cout << "Buzz";
        cout << "\n";
    }
}

void print_times(int n) {
    for (int row = 1; row <= n; ++row) {
        for (int col = 1; col <= n; ++col) {
            cout << row * col << '\t';
        }
        cout << endl;
    }
}
