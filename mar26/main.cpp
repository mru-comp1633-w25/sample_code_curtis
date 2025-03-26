#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
//    cout << get_valid_input() << endl;
//    hanoi(6, 1, 3, 2);

    Node *head = new Node;
    head->data = 0;
    head->next = new Node;
    head->next->data = 1;
    head->next->next = nullptr;

    cout << "List has " << length(head) << " elements\n";
       
    
    return 0;
}
