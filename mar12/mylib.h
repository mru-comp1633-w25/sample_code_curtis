#ifndef MYLIB_H
#define MYLIB_H

struct Node {
    int data;
    Node *next = nullptr;
};

// constants

// function declarations
void append(Node *&head, int value);
void remove(Node *&head, int value);

void print(Node *head);
int len(Node *head);
void input_demo();

#endif // MYLIB_H
