
#include <iostream>
#include <cmath>
using namespace std;

double perimeter(double a, double b, double h) {
    double leg = sqrt(h * h + (b - a) * (b - a) / 4);
    return a + b + 2 * leg;
}

double area(double a, double b, double h) {
    return (a + b) * h / 2;
}

int main() {
    double a1, b1, h1, a2, b2, h2;
    cout << "Введите основания и высоту первой трапеции: ";
    cin >> a1 >> b1 >> h1;
    cout << "Введите основания и высоту второй трапеции: ";
    cin >> a2 >> b2 >> h2;
    double sumP = perimeter(a1, b1, h1) + perimeter(a2, b2, h2);
    double sumS = area(a1, b1, h1) + area(a2, b2, h2);
    cout << "Сумма периметров: " << sumP << endl;
    cout << "Сумма площадей: " << sumS << endl;
    return 0;
}
