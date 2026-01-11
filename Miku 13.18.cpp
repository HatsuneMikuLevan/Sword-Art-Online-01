

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Student {
        string surname, name, address;
        int school, grade;
    } students[28]; // заполнить
    
    struct SeniorStudent {
        string surname, name, address;
    } seniors[28];
    int seniorCount = 0;
    
    int currentSchool;
    cout << "Enter school number: ";
    cin >> currentSchool;
    
    for (int i = 0; i < 28; i++) {
        if (students[i].school == currentSchool && students[i].grade >= 10) {
            seniors[seniorCount++] = {students[i].surname, students[i].name, students[i].address};
        }
    }
    
    for (int i = 0; i < seniorCount; i++) {
        cout << seniors[i].surname << " " << seniors[i].name << " " << seniors[i].address << endl;
    }
    
    return 0;
}
