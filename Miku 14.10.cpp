
#include <iostream>
#include <cmath>
using namespace std;

double func(double n) {
    return (sqrt(n) + n) / 2;
}

int main() {
    double x = func(6) + func(13) + func(21);
    cout << "x = " << x << endl;
    return 0;
}
