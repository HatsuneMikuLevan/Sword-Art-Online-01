

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Student {
        string surname;
        int marks[10];
    } students[25]; // заполнить
    
    Student newStudent;
    int s;
    cout << "Enter new student surname: ";
    cin >> newStudent.surname;
    cout << "Enter 10 marks: ";
    for (int i = 0; i < 10; i++) cin >> newStudent.marks[i];
    cout << "Enter position to insert (1-26): ";
    cin >> s;
    s--; // в индексы
    
    // Сдвиг
    for (int i = 25; i > s; i--) {
        students[i] = students[i - 1];
    }
    students[s] = newStudent;
    
    // Вывод
    for (int i = 0; i < 26; i++) {
        cout << students[i].surname << ": ";
        for (int j = 0; j < 10; j++) cout << students[i].marks[j] << " ";
        cout << endl;
    }
    
    return 0;
}
