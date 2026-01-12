

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

int gcdThree(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int main() {
    int a, b, c;
    cout << "Введите три натуральных числа: ";
    cin >> a >> b >> c;
    cout << "НОД(" << a << ", " << b << ", " << c << ") = " << gcdThree(a, b, c) << endl;
    return 0;
}
