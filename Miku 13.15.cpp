

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Employee {
        string surname;
        string address;
    } employees[30]; // заполнить
    
    string targetSurnames[] = {"Kuzin", "Kuravlev", "Kudin", "Kulkov", "Kubikov"};
    
    for (int i = 0; i < 30; i++) {
        for (const string& s : targetSurnames) {
            if (employees[i].surname == s) {
                cout << employees[i].surname << ": " << employees[i].address << endl;
                break;
            }
        }
    }
    
    return 0;
}
