
#include <iostream>
using namespace std;

int sumThreeDigits(int n) {
    return n / 100 + (n / 10) % 10 + n % 10;
}

bool isLucky(int n) {
    int first = n / 1000;
    int second = n % 1000;
    return sumThreeDigits(first) == sumThreeDigits(second);
}

int main() {
    // Способ 1
    int count1 = 0;
    for (int i = 100000; i <= 999999; i++) {
        int first = i / 1000;
        int second = i % 1000;
        if (sumThreeDigits(first) == sumThreeDigits(second)) {
            count1++;
        }
    }
    cout << "Способ 1: " << count1 << " счастливых чисел" << endl;

    // Способ 2
    int count2 = 0;
    for (int i = 100000; i <= 999999; i++) {
        if (isLucky(i)) count2++;
    }
    cout << "Способ 2: " << count2 << " счастливых чисел" << endl;
    return 0;
}
