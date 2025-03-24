#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>

struct Foo {
    int a;
    char b;
//    bool operator==(const Foo &rhs) const;
};

bool operator==(const Foo &lhs, const Foo &rhs);
std::ostream &operator<<(std::ostream &out, const Foo &foo);

#endif // MYLIB_H
