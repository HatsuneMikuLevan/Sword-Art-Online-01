
#include <iostream>
using namespace std;

void drawLine() {
    for (int i = 0; i < 60; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    drawLine();
    return 0;
}
