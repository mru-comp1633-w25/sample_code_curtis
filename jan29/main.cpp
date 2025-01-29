#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    // example of a string literal, okay to use
    const char message[] = "This is a string literal";
    // not this one
    string message2 = "This is a string class, do not use";

    // example of non-standard unreadable loop
    int i = 0;
    for (cout << "Start"; i < 3; cout << "end " << i++);
    
    int n;
    cout << "Enter a number to count to: ";
    cin >> n;
    fizzbuzz_while(n);
    fizzbuzz_for(n);

    print_times(n);
    
    return 0;
}
