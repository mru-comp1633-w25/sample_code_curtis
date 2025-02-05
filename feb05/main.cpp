#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    // double high_temps[MAX_SIZE];
    // int n_temps;
    // read_temps(high_temps, n_temps);
    // print(high_temps, n_temps);
    
    char connect4[ROWS][COLS] = {};
    initialize(connect4);
    print(connect4);

    // doesn't work like this
    for (int i = 0; i < ROWS * COLS; ++i) {
        cout << connect4[i] << ' ';
    }
    cout << endl;
    
    return 0;
}
