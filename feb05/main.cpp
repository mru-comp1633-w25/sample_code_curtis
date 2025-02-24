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

    int grid[ROWS] = {1, 2, 3};

    cout << "Printing 1 row at a time\n";
    for (int i = 0; i < ROWS; ++i) {
        connect4[i][COLS-1] = '\0';
        cout << connect4[i] << endl;
        cout << grid[i] << endl;
    }
    
    
    print(connect4);

    // doesn't work like this
    for (int i = 0; i < ROWS * COLS; ++i) {
        cout << connect4[i] << ' ';
    }
    cout << endl;
    
    return 0;
}
