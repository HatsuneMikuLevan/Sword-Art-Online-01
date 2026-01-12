

#include <iostream>
#include <cmath>
using namespace std;

double func(double n) {
    return (n + sin(n)) / (sin(n) + n);
}

int main() {
    double ya = func(2) + func(6) + func(1);
    cout << "а) y = " << ya << endl;
    double yb = (1 + sin(4)) / (4 + sin(1)) +
                (7 + sin(5)) / (5 + sin(7)) +
                (3 + sin(2)) / (2 + sin(3));
    cout << "б) y = " << yb << endl;
    return 0;
}
