

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Пары близнецов до 200: " << endl;
    for (int i = 2; i <= 198; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << i << " и " << i + 2 << endl;
        }
    }
    return 0;
}
