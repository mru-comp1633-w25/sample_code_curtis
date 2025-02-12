#include "mylib.h"
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {

    cout << "Command line arguments: \n";
    for (int i = 0; i < argc; ++i) {
        cout << "argv[" << i << "]: " << argv[i] << endl;
    }
    

    ifstream in_file(argv[1]);

    if (!in_file) {
        cout << "Error, could not open file\n";
        return 1;
    }
    
    ofstream out_file(argv[2]);
    char line[256];
//    int *bad = nullptr;
    
    while (in_file.getline(line, 256)) {
        out_file << line << endl;
//        *bad = 1;
    }

    
    in_file.close();
    out_file.close();
    
    
    // char hi[32] = "this has spaces\0";
    // cout << hi << endl;
    // hi[4] = '!';
    // cout << hi << endl;
    // // hi = "Hello"; can't do this
    // strcpy(hi, "Hello");

    // char name[32];
    // cout << "Enter your name: ";
    // cin >> name;
    // cout << "Hi, " << name << endl;
    // cin.get(); // read the newline
    // cout << "Enter your name: ";
    // cin.getline(name, 32);
    // cout << "Hi, " << name << endl;
    
    return 0;
} // last line
