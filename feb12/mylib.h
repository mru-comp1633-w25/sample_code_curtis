#ifndef MYLIB_H
#define MYLIB_H
#include <iostream>

// constants

struct DataPoint {
    double x;
    double y;
    char colour = 'k';
};

struct String {
    char s[512] = {};
    int len = 0;
};

String to_string(std::istream &in);

void print(const DataPoint &p);

// function declarations
void echo(std::istream &in);

#endif // MYLIB_H
