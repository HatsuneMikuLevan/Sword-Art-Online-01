

#include <iostream>
#include <cmath>
using namespace std;

double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double a, b, c, d, e;
    cout << "Введите стороны пятиугольника (a, b, c, d, e): ";
    cin >> a >> b >> c >> d >> e;
    double S = triangleArea(a, b, e) + triangleArea(e, c, d);
    cout << "Площадь пятиугольника = " << S << endl;
    return 0;
}
