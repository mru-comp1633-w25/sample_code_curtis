#include <iostream>
#include "cat.h"
#include "duck.h"

using namespace std;

void adopt(const Animal &a) {
    cout << "Congratulations on adopting a new pet!\n";
    a.speak();
}

int main() {
    Cat a(7, "Salvador");
    a.pounce();
    a.speak();

    Cat mittens(3.5, "Mittens");
    adopt(mittens);

    Duck buddy(1, "Debug buddy", true);
    adopt(buddy);
    // Animal generic_duck = buddy;
    // generic_duck.speak();
    return 0;
}

