

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Student {
        string surname;
        double height;
    } students[15]; // заполнить и упорядочить по убыванию
    
    Student newStudent;
    cout << "Enter new student surname and height: ";
    cin >> newStudent.surname >> newStudent.height;
    
    // Вставка
    int pos = 0;
    while (pos < 15 && students[pos].height > newStudent.height) {
        pos++;
    }
    
    for (int i = 15; i > pos; i--) {
        students[i] = students[i - 1];
    }
    students[pos] = newStudent;
    
    for (int i = 0; i <= 15; i++) {
        cout << students[i].surname << " " << students[i].height << endl;
    }
    
    return 0;
}
