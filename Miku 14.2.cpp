
#include <iostream>
using namespace std;

void drawCharLine(char c, int n) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
    cout << endl;
}

int main() {
    drawCharLine('*', 60);
    return 0;
}
