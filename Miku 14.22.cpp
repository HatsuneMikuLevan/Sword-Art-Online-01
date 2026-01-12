

#include <iostream>
using namespace std;

bool isPowerOfFive(int n) {
    if (n <= 0) return false;
    while (n % 5 == 0) {
        n /= 5;
    }
    return n == 1;
}

int main() {
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (isPowerOfFive(x)) count++;
    }
    cout << "Количество степеней пятерки: " << count << endl;
    return 0;
}
