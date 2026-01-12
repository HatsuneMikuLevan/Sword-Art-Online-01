

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
    int a, b;
    cout << "Введите числитель и знаменатель дроби: ";
    cin >> a >> b;
    int g = gcd(a, b);
    int p = a / g;
    int q = b / g;
    cout << "Сокращенная дробь: " << p << "/" << q << endl;
    return 0;
}
