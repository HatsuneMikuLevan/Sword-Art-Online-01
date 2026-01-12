

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;
    cout << "Введите два натуральных числа: ";
    cin >> a >> b;
    cout << "НОК(" << a << ", " << b << ") = " << lcm(a, b) << endl;
    return 0;
}
