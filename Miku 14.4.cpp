
#include <iostream>
using namespace std;

void drawCharLine(char c, int n) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
    cout << endl;
}

void drawRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        drawCharLine('*', width);
    }
}

int main() {
    drawRectangle(60, 20);
    return 0;
}
