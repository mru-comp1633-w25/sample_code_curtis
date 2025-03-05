#include "mylib.h"
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int x;
    int y = 37;
    const int *pci = &y; // pointer to a const int
    pci = &x; // can change where it points
    //*pci = 0; // error, can't modify through pci
    
    int * const cpi = &y; // const pointer to an int
    *cpi = 0; // can change value at location
    //cpi = &x; // error, can't change where it points
    
    const int * const cpci = &y; // const pointer to a const int

    int *px = &x;
//    px[10000] = 0;
//   cout << px[10000] << endl;

//    array_demo();

    int arr[] = {1, 2, 3, 2, 1};
    int *maxarr = max(arr, 5);
    cout << "The maximum value is " << *maxarr << endl;


    // allocate an int on the heap
    int *p = new int;

    cout << "heap int value: " << *p << endl;

    // every new needs a delete
    delete p;

    cout << "p: " << p << endl;
    p = nullptr;

    int *dyarr = new int[y]; // 37 element array
    delete [] arr;
    
    return 0;
}
