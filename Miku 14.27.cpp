
#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int a, b;
    cout << "Введите два натуральных числа: ";
    cin >> a >> b;
    int cntA = countDigits(a);
    int cntB = countDigits(b);
    if (cntA > cntB) cout << "В первом числе больше цифр" << endl;
    else if (cntA < cntB) cout << "Во втором числе больше цифр" << endl;
    else cout << "Количество цифр одинаково" << endl;
    return 0;
}
