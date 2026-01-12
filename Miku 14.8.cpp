
#include <iostream>
#include <cmath>
using namespace std;

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) {
    double p = perimeter(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double a1, b1, c1, a2, b2, c2;
    cout << "Введите стороны первого треугольника: ";
    cin >> a1 >> b1 >> c1;
    cout << "Введите стороны второго треугольника: ";
    cin >> a2 >> b2 >> c2;
    double sumP = perimeter(a1, b1, c1) + perimeter(a2, b2, c2);
    double sumS = area(a1, b1, c1) + area(a2, b2, c2);
    cout << "Сумма периметров: " << sumP << endl;
    cout << "Сумма площадей: " << sumS << endl;
    return 0;
}
