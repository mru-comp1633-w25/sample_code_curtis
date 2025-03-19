#ifndef MYLIB_H
#define MYLIB_H
#include <iostream>

class CTime {
public:
    CTime();
    CTime(int h, int m, int s);
    ~CTime();
    
    void write(std::ostream &out) const;
    void set(int h, int m, int s);
//    int compare(const CTime &other) const;
    bool operator < (const CTime &other) const;
    
    void increment();
private:
//    int *on_the_heap
    int hours;
    int minutes;
    int seconds;
};

#endif // MYLIB_H
