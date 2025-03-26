#include "mylib.h"
#include <iostream>
using namespace std;

int get_valid_input() {
    int choice;
    cout << "Enter a number between 1 and 10: ";
    cin >> choice;
    if (choice < 1 || choice > 10) {
        cout << choice << " is not valid, try again." << endl;
        choice = get_valid_input();
    }
    return choice;
}

void hanoi(int n, int src, int dest, int spare) {
    if (n == 1) {
        // base case
        cout << "Move disk from peg " << src
             << " to peg " << dest << endl;
    } else {
        hanoi(n-1, src, spare, dest);
        hanoi(1, src, dest, spare);
        hanoi(n-1, spare, dest, src);
    }
}

int length(Node *head) {
    // base case
    if (head == nullptr) {
        return 0;
    } else {
        // recursive case
        return 1 + length(head->next);
    }
}
