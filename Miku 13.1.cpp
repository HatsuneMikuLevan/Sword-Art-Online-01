

#include <iostream>
#include <string>
using namespace std;

int main() {
    string surnames[25] = {"Ivanov", "Petrov", "Sidorov", ...}; // заполнить
    string names[25] = {"Ivan", "Petr", "Nikolay", ...}; // заполнить
    
    for (int i = 0; i < 25; i++) {
        cout << surnames[i] << " " << names[i] << endl;
    }
    
    return 0;
}
