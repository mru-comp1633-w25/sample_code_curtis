#include "mylib.h"
#include <cctype>


String to_string(std::istream &in) {
    String str;
    char c;
    in.get(c);
    while (c != '\n') {
        str.s[str.len] = c;
        str.len++;
        in.get(c);
    }
    return str;
}

void print(const DataPoint &p) {
    std::cout << "[" << p.x << ", " << p.y
              << "], colour = " << p.colour << std::endl;
}

void echo(std::istream &in) {
    char c;
    in.get(c); // priming read
    while (c != '\n') { // loop condition
        std::cout << static_cast<char>(toupper(c));
        in.get(c); // update read
    }
    std::cout << std::endl;
}
