

#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    double AB, AD, CD;
    cout << "Введите AB, AD, CD: ";
    cin >> AB >> AD >> CD;
    double BD = hypotenuse(AB, AD);
    double BC = hypotenuse(BD, CD);
    double P = AB + AD + CD + BC;
    cout << "Периметр ABCD = " << P << endl;
    return 0;
}
