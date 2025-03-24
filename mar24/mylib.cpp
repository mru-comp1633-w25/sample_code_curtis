#include "mylib.h"

bool operator==(const Foo &lhs, const Foo &rhs) {
    return lhs.a == rhs.a && lhs.b == rhs.b;
}


std::ostream &operator<<(std::ostream &out, const Foo &foo) {
    out << "a: " << foo.a << ", b: " << foo.b;
    return out;
}
