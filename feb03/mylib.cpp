#include "mylib.h"
#include <iostream>

using namespace std;

void private_function() {
    cout << "This is only accessible from mylib.cpp\n";
}

void print(const int arr[], int size) {    
    cout << "sizeof(arr) in print function: " << sizeof(arr) << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
//    arr[0] = 0;
}

void array_examples() {
    cout << "Array examples function\n";
    //   private_function();
    int numbers[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "First value: " << numbers[0] << endl;
    cout << "Whole array: " << numbers << endl;

    // cannot make copy
//    int copy_nums = numbers;
//    cout << "copy_nums " << copy_nums << endl;    
    int other_nums[10] = {};
//    other_nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Other_nums[0] " << other_nums[0] << endl;

    cout << "sizeof(numbers): " << sizeof(numbers) << endl;
    print(numbers, 10);
    
    if (numbers == other_nums) {
        cout << "This should never happen";
    }

           

    
    int a_bunch_of_nums[1000];
    a_bunch_of_nums[999] = 42;
    
    cout << "Index 999: " << a_bunch_of_nums[999] << endl;
    // cout << "Index -1: " << a_bunch_of_nums[-1] << endl;
    // a_bunch_of_nums[-1] = 123;
    // cout << "Index -1: " << a_bunch_of_nums[-1] << endl;
    
    // cout << "Index 100000: " << a_bunch_of_nums[100000] <
    //     < endl;
    
}

double babbage_tax(double income) {
    const int NUM_BRACKETS = 3;
    const double THRESH[] = {5000, 10000, 20000};
    const double BRACKET[] = {0.03, 0.058, 0.108};
    double tax = 0;
    for (int i = NUM_BRACKETS-1; i >= 0; --i) {
        if (income > THRESH[i]) {
            tax += (income - THRESH[i]) * BRACKET[i];
            income = THRESH[i];
        }
    }
    return tax;
}
