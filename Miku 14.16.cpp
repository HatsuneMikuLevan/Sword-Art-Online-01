

#include <iostream>
#include <cmath>
using namespace std;

double length(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты вершин треугольника: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double P = length(x1, y1, x2, y2) +
               length(x2, y2, x3, y3) +
               length(x3, y3, x1, y1);
    cout << "Периметр треугольника = " << P << endl;
    return 0;
}
