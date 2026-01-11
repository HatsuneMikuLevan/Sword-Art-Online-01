

#include <iostream>
#include <string>
using namespace std;

int main() {
    string cities[26] = {"Rome", "Milan", "Paris", ...}; // заполнить
    string countries[26] = {"Italy", "Italy", "France", ...}; // заполнить
    
    for (int i = 0; i < 26; i++) {
        if (countries[i] == "Italy") {
            cout << cities[i] << endl;
        }
    }
    
    return 0;
}
