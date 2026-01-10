

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "aaabbccccdee";
    int maxCount = 1, current = 1;
    
    for (size_t i = 1; i < text.length(); i++) {
        if (text[i] == text[i - 1]) {
            current++;
            if (current > maxCount) {
                maxCount = current;
            }
        } else {
            current = 1;
        }
    }
    
    cout << "Наибольшее количество идущих подряд одинаковых символов: " << maxCount << endl;
    return 0;
}
