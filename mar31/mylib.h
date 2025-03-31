#ifndef MYLIB_H
#define MYLIB_H

struct URL {
    char url[512]; // wrap in a struct for copyability
};

class URLStack {
public:
    URLStack(int capacity);
    URLStack(const URLStack &other); // copy constructor
    ~URLStack();

    URLStack & operator=(const URLStack &other);

    bool empty() const;
    bool full() const;
    void push(const char *url);
    URL pop();
    URL peek() const;
private:
    int capacity;
    URL *stack;
    int top;

    void copy(const URLStack &other);
};

#endif // MYLIB_H
