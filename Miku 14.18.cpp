

#include <iostream>
#include <cmath>
using namespace std;

double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
}

int main() {
    double x[5], y[5];
    cout << "Введите координаты 5 вершин: ";
    for (int i = 0; i < 5; i++) {
        cin >> x[i] >> y[i];
    }
    double S = 0;
    for (int i = 1; i < 4; i++) {
        S += triangleArea(x[0], y[0], x[i], y[i], x[i+1], y[i+1]);
    }
    cout << "Площадь пятиугольника = " << S << endl;
    return 0;
}
