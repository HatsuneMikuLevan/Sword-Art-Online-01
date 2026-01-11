

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Employee {
        string surname;
        double salary;
        char gender; // 'M' или 'F'
    } employees[20]; // заполнить
    
    // a)
    double maxSalaryMale = -1;
    string richestMale;
    for (int i = 0; i < 20; i++) {
        if (employees[i].gender == 'M' && employees[i].salary > maxSalaryMale) {
            maxSalaryMale = employees[i].salary;
            richestMale = employees[i].surname;
        }
    }
    cout << "Richest male: " << richestMale << endl;
    
    // б)
    double minSalaryMale = 1e9, minSalaryFemale = 1e9;
    string poorestMale, poorestFemale;
    for (int i = 0; i < 20; i++) {
        if (employees[i].gender == 'M' && employees[i].salary < minSalaryMale) {
            minSalaryMale = employees[i].salary;
            poorestMale = employees[i].surname;
        }
        if (employees[i].gender == 'F' && employees[i].salary < minSalaryFemale) {
            minSalaryFemale = employees[i].salary;
            poorestFemale = employees[i].surname;
        }
    }
    cout << "Poorest male: " << poorestMale << ", Poorest female: " << poorestFemale << endl;
    
    return 0;
}
