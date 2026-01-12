
#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b, c, d;
    cout << "Введите a, b, c, d: ";
    cin >> a >> b >> c >> d;
    swap(a, b);
    swap(c, d);
    cout << "После обмена: a=" << a << ", b=" << b 
         << ", c=" << c << ", d=" << d << endl;
    return 0;
}
