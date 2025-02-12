#include "mylib.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {

    DataPoint p1 = {};
    DataPoint p2;

    print(p1);

    p2.x = 3;
    p2.y = 4.5;
    p2.colour = 'r';
    
    print(p2);

    // copy p1 into p2
    p2 = p1;
    print(p2);

    String s = to_string(cin);
    cout << s.s << " has " << s.len << " chars\n";
    
//    cout << "p1 == p2: " << (p1 == p2) << endl;
    
    // cout << "Calling echo with cin\n";
    // echo(cin);

    // cout << "Calling echo with argv[1]\n";
    // ifstream infile(argv[1]);
    // echo(infile);
    // infile.close();
    
    
    return 0;
}
