#include <iostream>
using namespace std;

const int NUM_PLANETS = 8;

void foo();

int main() {

    cout << "NUM_PLANETS in main: " << NUM_PLANETS << endl;
    foo();
//    NUM_PLANETS++;
//    cout << "NUM_PLANETS: " << NUM_PLANETS << endl;
    
    return 0;
}

void foo() {
    cout << "NUM_PLANETS in foo: " << NUM_PLANETS << endl;
}
