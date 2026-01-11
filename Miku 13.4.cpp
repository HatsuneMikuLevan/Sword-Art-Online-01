

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Employee {
        string surname;
        bool isObligatory;
    } employees[16]; // заполнить
    
    for (int i = 0; i < 16; i++) {
        if (employees[i].isObligatory) {
            cout << employees[i].surname << endl;
        }
    }
    
    return 0;
}
