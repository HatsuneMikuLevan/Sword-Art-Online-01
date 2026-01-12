
#include <iostream>
using namespace std;


void drawRectangle1(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


void drawCharLine(char c, int n) {
    for (int i = 0; i < n; i++) cout << c;
    cout << endl;
}

void drawRectangle2(int width, int height) {
    for (int i = 0; i < height; i++) {
        drawCharLine('*', width);
    }
}

int main() {
    int w, h;
    cout << "Введите ширину и высоту: ";
    cin >> w >> h;
    drawRectangle1(w, h);
    cout << endl;
    drawRectangle2(w, h);
    return 0;
}
