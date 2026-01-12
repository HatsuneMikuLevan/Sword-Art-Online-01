

#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int a, b;
    cout << "Введите два натуральных числа: ";
    cin >> a >> b;
    if (isPalindrome(a)) cout << a << " - палиндром" << endl;
    if (isPalindrome(b)) cout << b << " - палиндром" << endl;
    if (!isPalindrome(a) && !isPalindrome(b)) cout << "Нет палиндромов" << endl;
    return 0;
}
