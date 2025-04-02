#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
    Animal(double age, const char *name);
    virtual ~Animal();
    virtual void speak() const = 0;
private:
    double age_years;
    const char* name;
};

#endif // ANIMAL_H
