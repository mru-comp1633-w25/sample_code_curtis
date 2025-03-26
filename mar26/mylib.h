#ifndef MYLIB_H
#define MYLIB_H

struct Node {
    int data;
    Node *next;
};

int length(Node *head);

// Move n disks from src to dest, using spare as spare
void hanoi(int n, int src, int dest, int spare);

int get_valid_input();

#endif // MYLIB_H
