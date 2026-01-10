

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello   world    example";
    int maxSpaces = 0, current = 0;
    
    for (char c : s) {
        if (c == ' ') {
            current++;
            if (current > maxSpaces) {
                maxSpaces = current;
            }
        } else {
            current = 0;
        }
    }
    
    cout << "Наибольшее количество идущих подряд пробелов: " << maxSpaces << endl;
    return 0;
}
