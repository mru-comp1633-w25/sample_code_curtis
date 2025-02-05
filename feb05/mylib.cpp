#include "mylib.h"
#include <iostream>

using namespace std;

void read_temps(double high_temps[MAX_SIZE], int &num_temps) {
    num_temps = 0;
    double temp;
    cout << "Enter the high temperature for the day: ";
    cin >> temp;
    while (temp != -100 && num_temps < MAX_SIZE) {
        high_temps[num_temps] = temp;
        num_temps++;
        cout << "Enter the next temperature: ";
        cin >> temp;
    }
}

void print(const double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void initialize(char connect4[ROWS][COLS]) {
    for (int r = 0; r < ROWS; ++r) {
        for (int c = 0; c < COLS; ++c) {
            int i = (COLS * r) + c;
            if (i < 26) {
                connect4[r][c] = static_cast<char>('A' + i);
            } else {
                connect4[r][c] = static_cast<char>('a' + i - 26);
            }
        }
    }
}

void print(const char connect4[ROWS][COLS]) {
  for (int r = 0; r < ROWS; ++r) {
      for (int c = 0; c < COLS; ++c) {
          cout << connect4[r][c] << ' ';
      }
      cout << endl;
  }
}
