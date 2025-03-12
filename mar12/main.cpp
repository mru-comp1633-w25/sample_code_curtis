#include "mylib.h"
#include <iostream>
using namespace std;

int main() {

    Node *head = nullptr;
    append(head, 5);
    append(head, 7);

    print(head);
    cout << "Length is: " << len(head) << endl;

    remove(head, 7);
    print(head);
    remove(head, 5);
        
    return 0;
}
