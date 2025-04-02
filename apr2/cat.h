#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public Animal {
public:
    Cat(double age, const char *name);
    ~Cat();
    void stalk();
    void pounce();
    virtual void speak() const;
private:
    int lives_remaining;
//    double age_years; // don't redefine member vars
};

#endif // CAT_H
