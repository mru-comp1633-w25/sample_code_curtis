#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double a, double b);

int main() {
    double a, b;
    cout << "Enter the two side lengths of a right angle triangle: ";
    cin >> a >> b;
    
    cout.precision(2);
    cout << "sqrt(a): " << sqrt(a) << endl;
    cout << "sqrt(b): " << sqrt(b) << endl;
    
    cout << "The hypotenuse length is " << hypotenuse(a, b) << endl;
    return 0;
}

double hypotenuse(double a, double b) {
    cout << "a in hypotenuse function: " << a << endl;
    return sqrt(a*a + b*b);
}
