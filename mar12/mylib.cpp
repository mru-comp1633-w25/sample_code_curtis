#include "mylib.h"
#include <iostream>

using namespace std;

void input_demo() {
    const int N = 256;
    char str[N];
    cin.getline(str, N, ',');
    cout << "You entered: " << str << endl;
    cin.getline(str, N, '\n');
    cout << "Second part: " << str << endl;
}

void print(Node *head) {
    // print the list
    Node *cur = head; // initialization
    while (cur != nullptr) { // or while (cur)
        cout << cur->data << ' ';
        cur = cur->next; // update
    }
    cout << endl;
}

void append(Node *&head, int value) {
    // allocate the new node
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = nullptr;

    if (!head) {
        head = new_node;
        return;
    }
    
    // adding a value to the end of the list
    Node *cur = head;
    while (cur->next) {
        cur = cur->next;
    }
    // connect it to the list
    cur->next = new_node;
}

void remove(Node *&head, int value) {
    if (!head) {
        // special case: empty list
        return;
    }
    
    if (head->data == value) {
        // special case: deleting head node
        Node *d = head;
        head = head->next;
        delete d;
        return;
    }
    
    // general case: somewhere in the list
    Node *prev = nullptr;
    Node *current = head;
    // Find the node to delete
    while (current && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current) {
        prev->next = current->next; // Disconnect the node
        delete current; // Free the memory
    }
    // otherwise, not in list, do nothing
}

int len(Node *head) {
    int length = 0;
    Node *cur = head;
    while (cur) {
        ++length;
        cur = cur->next;
    }
    return length;
}
