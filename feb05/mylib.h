#ifndef MYLIB_H
#define MYLIB_H

// Constants
const int ROWS = 6;
const int COLS = 7;
const int MAX_SIZE = 1024;

// function declarations
void read_temps(double high_temps[MAX_SIZE], int &num_temps);
void print(const double arr[], int size);

void initialize(char connect4[ROWS][COLS]);
void print(const char connect4[ROWS][COLS]);

#endif // MYLIB_H
