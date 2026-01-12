

#include <iostream>
using namespace std;

bool hasRealRoots(double a, double b, double c) {
    double D = b * b - 4 * a * c;
    return D >= 0;
}

int main() {
    double a, b, c;
    cout << "Введите a, b, c: ";
    cin >> a >> b >> c;
    int count = 0;
    if (hasRealRoots(a, b, c)) count++;
    if (hasRealRoots(b, a, c)) count++;
    if (hasRealRoots(c, a, b)) count++;
    cout << "Количество уравнений с вещественными корнями: " << count << endl;
    return 0;
}
