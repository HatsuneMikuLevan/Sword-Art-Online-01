
#include <iostream>
using namespace std;

void drawCharLine(char c, int n) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
    cout << endl;
}

int main() {
    // а) 5 строк по 10 символов
    for (int i = 0; i < 5; i++) {
        drawCharLine('*', 10);
    }
    cout << endl;
    // б) 10 строк по 15 символов
    for (int i = 0; i < 10; i++) {
        drawCharLine('#', 15);
    }
    return 0;
}
