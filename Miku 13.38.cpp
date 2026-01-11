

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Employee {
        string surname;
        int age;
        bool isObligatory;
    } employees[16]; // заполнить
    
    // a)
    int minAgeObligatory = 1e9;
    string youngestObligatory;
    for (int i = 0; i < 16; i++) {
        if (employees[i].isObligatory && employees[i].age < minAgeObligatory) {
            minAgeObligatory = employees[i].age;
            youngestObligatory = employees[i].surname;
        }
    }
    cout << "Youngest obligatory: " << youngestObligatory << endl;
    
    // б)
    int maxAgeObligatory = -1, maxAgeNonObligatory = -1;
    string oldestObligatory, oldestNonObligatory;
    for (int i = 0; i < 16; i++) {
        if (employees[i].isObligatory && employees[i].age > maxAgeObligatory) {
            maxAgeObligatory = employees[i].age;
            oldestObligatory = employees[i].surname;
        }
        if (!employees[i].isObligatory && employees[i].age > maxAgeNonObligatory) {
            maxAgeNonObligatory = employees[i].age;
            oldestNonObligatory = employees[i].surname;
        }
    }
    cout << "Oldest obligatory: " << oldestObligatory << endl;
    cout << "Oldest non-obligatory: " << oldestNonObligatory << endl;
    
    return 0;
}
