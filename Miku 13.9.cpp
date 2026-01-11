

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Student {
        string surname;
        int grade;
        int mark;
    } students[30]; // заполнить
    
    for (int i = 0; i < 30; i++) {
        if (students[i].grade == 9 && students[i].mark == 5) {
            cout << students[i].surname << endl;
        }
    }
    
    return 0;
}
