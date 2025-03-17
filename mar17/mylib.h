#ifndef MYLIB_H
#define MYLIB_H
#include <iostream>

class CTime {
public:
    void write(std::ostream &out);
    void set(int h, int m, int s);
    int compare(CTime other);
    void increment();
private:
    int hours;
    int minutes;
    int seconds;
};

// constants

// function declarations
void say_hi();



#endif // MYLIB_H
