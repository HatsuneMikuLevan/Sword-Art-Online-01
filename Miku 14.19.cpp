

#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int a[5], b[5];
    cout << "Введите 5 чисел первой последовательности: ";
    for (int i = 0; i < 5; i++) cin >> a[i];
    cout << "Введите 5 чисел второй последовательности: ";
    for (int i = 0; i < 5; i++) cin >> b[i];
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < 5; i++) {
        if (isEven(a[i])) evenCount++;
        if (!isEven(b[i])) oddCount++;
    }
    cout << "Четных в первой: " << evenCount << endl;
    cout << "Нечетных во второй: " << oddCount << endl;
    return 0;
}
