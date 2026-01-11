

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Peak {
        string name;
        int height;
    } peaks[15]; // заполнить
    
    for (int i = 0; i < 15; i++) {
        if (peaks[i].height > 3000) {
            cout << peaks[i].name << endl;
        }
    }
    
    return 0;
}
