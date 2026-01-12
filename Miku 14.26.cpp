
#include <iostream>
using namespace std;

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int a, b;
    cout << "Введите два натуральных числа: ";
    cin >> a >> b;
    int sumA = sumDigits(a);
    int sumB = sumDigits(b);
    if (sumA > sumB) cout << "В первом числе сумма цифр больше" << endl;
    else if (sumA < sumB) cout << "Во втором числе сумма цифр больше" << endl;
    else cout << "Суммы цифр равны" << endl;
    return 0;
}
