

#include <iostream>
using namespace std;

int sign(double a) {
    if (a > 0) return 1;
    else if (a == 0) return 0;
    else return -1;
}

int main() {
    double x, y;
    cout << "Введите x и y: ";
    cin >> x >> y;
    int z = sign(x) + sign(y);
    cout << "z = " << z << endl;
    return 0;
}
