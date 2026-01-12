

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

int main() {
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;
    int currentGcd;
    cin >> currentGcd;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        currentGcd = gcd(currentGcd, x);
    }
    cout << "НОД всех чисел = " << currentGcd << endl;
    return 0;
}
