

#include <iostream>
#include <cmath>
using namespace std;

double func(double a) {
    return (a + sqrt(a)) / (sqrt(a) + a);
}

int main() {
    double xa = func(5) + func(12) + func(31);
    cout << "а) x = " << xa << endl;
    double xb = (15 + sqrt(7)) / (7 + sqrt(13)) +
                (15 + sqrt(12)) / (sqrt(15) + 12) +
                (sqrt(21) + 32) / (sqrt(52) + 21);
    cout << "б) x = " << xb << endl;
    return 0;
}
