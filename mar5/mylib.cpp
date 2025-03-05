#include "mylib.h"
#include <cstring>
#include <iostream>

using namespace std;

int *max(int arr[], int n) {
    int *maxptr = arr;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > *maxptr) {
            maxptr = arr + i;
        }
    }
    return maxptr;
}

bool are_friends(Cat c, Dog d) {
    return c > d;
}

void array_demo() {
    
    char A[10];
    strcpy(A, "Hello");

    char *hello = A;
    cout << hello << endl;


    char nonull[10];
    nonull[0] = 'A';
    cout << nonull << endl;
    
    *hello = 'J';
    cout << hello << endl;

    hello++;
    *hello = 'o';
    cout << hello << endl;

    cout << A << endl;

    int arr[5] = {};
    int *ptr = arr;
    cout << arr << endl;
    cout << ptr << endl;

    
}
