

#include <iostream>
using namespace std;

int main() {
    int left[28], right[28]; // заполнить
    
    bool correct = true;
    for (int i = 1; i < 28; i++) {
        if (right[i - 1] != left[i]) {
            cout << "First violating domino at position " << i + 1 << endl;
            correct = false;
            break;
        }
    }
    
    if (correct) cout << "Domino chain is correct." << endl;
    
    return 0;
}
