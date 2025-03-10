#include "mylib.h"
#include <iostream>
using namespace std;

const int NAME_SIZE = 32;

struct Person {
    char name[NAME_SIZE];
    Person *spouse;
};

struct Node {
    int data;
    Node *next = nullptr;
};

int main() {
    Person a = {"Bandit"};
    Person b = {"Chilli", &a};
    a.spouse = &b;

    Node *head = new Node;
    head->data = 5;

    head->next = new Node;
    head->next->data = 7;

    head->next->next = new Node;
    head->next->next->data = 10;

    cout << head << endl;
    cout << head->next << endl;
    cout << head->next->next << endl;
    head->next->next->next = nullptr;

    // print the list
    Node *cur = head; // initialization
    while (cur != nullptr) { // or while (cur)
        cout << cur->data << ' ';
        cur = cur->next; // update
    }
    cout << endl;

    delete head->next->next;
    delete head->next;
    delete head;
    
    return 0;
}
