

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Contact {
        string surname;
        string phone;
    } contacts[30]; // заполнить
    
    // a)
    string surnameToFind;
    cout << "Enter surname to find phone: ";
    cin >> surnameToFind;
    bool found = false;
    for (int i = 0; i < 30; i++) {
        if (contacts[i].surname == surnameToFind) {
            cout << "Phone: " << contacts[i].phone << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Not found." << endl;
    
    // б)
    string phoneToFind;
    cout << "Enter phone to find surname: ";
    cin >> phoneToFind;
    found = false;
    for (int i = 0; i < 30; i++) {
        if (contacts[i].phone == phoneToFind) {
            cout << "Surname: " << contacts[i].surname << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Not found." << endl;
    
    return 0;
}
