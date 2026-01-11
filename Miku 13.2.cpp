

#include <iostream>
#include <string>
using namespace std;

int main() {
    string clubs[20] = {"Club1", "Club2", ...}; // заполнить
    string cities[20] = {"City1", "City2", ...}; // заполнить
    
    for (int i = 0; i < 20; i++) {
        cout << clubs[i] << " " << cities[i] << endl;
    }
    
    return 0;
}
