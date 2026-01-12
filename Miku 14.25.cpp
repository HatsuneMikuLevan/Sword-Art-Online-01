

#include <iostream>
using namespace std;

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}

double power(double a, int n) {
    double res = 1;
    for (int i = 0; i < n; i++) res *= a;
    return res;
}

int main() {
    double numerator = power(2, 5) + power(3, 8);
    double denominator = factorial(6) + factorial(4);
    double result = numerator / denominator;
    cout << "Результат: " << result << endl;
    return 0;
}
