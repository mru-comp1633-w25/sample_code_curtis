#include "mylib.h"
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "Usage: " << argv[0] << " <src> <dest>\n";
        return 0;
    }
    
    cout << "Command line arguments: \n";
    for (int i = 0; i < 20; ++i) {
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

    cout << "Writing to : " << argv[2] << endl;
    while (in_file.getline(line, 256)) {
        out_file << line << endl;
//        *bad = 1;
    }

    
    in_file.close();
    out_file.close();
    
    
    return 0;
} // last line
