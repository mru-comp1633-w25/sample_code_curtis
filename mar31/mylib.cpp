#include "mylib.h"
#include <cstring>

// Array version (V1)
URLStack::URLStack(int capacity) {
    stack = new URL[capacity];
    this->capacity = capacity;
    top = -1;
}

URLStack::URLStack(const URLStack &other) {
    copy(other);
}


URLStack & URLStack::operator=(const URLStack &other) {
    // check for self assignment
    if (this == &other) {
        return *this;
    }

    delete [] stack;

    copy(other);

    // reference to object we copied to
    return *this;
}

void URLStack::copy(const URLStack &other) {
    this->capacity = other.capacity;
    stack = new URL[capacity];
    top = other.top;
    for (int i = 0; i < top; ++i) {
        stack[i] = other.stack[i];
    }
}
    

URLStack::~URLStack() {
    delete[] stack;
}

bool URLStack::empty() const {
    return top == -1;
}

bool URLStack::full() const {
    return top == capacity - 1;
}

URL URLStack::peek() const {
    return stack[top];
}

void URLStack::push(const char *s) {
    if (full())
        return;
    strcpy(stack[++top].url, s);
}

URL URLStack::pop() {
    return stack[top--];
}
