

#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (isPerfectSquare(x)) count++;
    }
    cout << "Количество полных квадратов: " << count << endl;
    return 0;
}
