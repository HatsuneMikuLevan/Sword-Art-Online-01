

#include <iostream>
#include <string>
using namespace std;

int main() {
    int students = 23;
    int subjects = 12;
    int marks[23][12]; // заполнить
    string subjectNames[12]; // заполнить
    
    string newSubject;
    int newMarks[23];
    int k;
    
    cout << "Enter new subject name: ";
    cin >> newSubject;
    cout << "Enter marks for 23 students: ";
    for (int i = 0; i < 23; i++) cin >> newMarks[i];
    cout << "Enter position to insert (1-13): ";
    cin >> k;
    k--;
    
    // Сдвиг столбцов
    for (int j = subjects; j > k; j--) {
        subjectNames[j] = subjectNames[j - 1];
        for (int i = 0; i < students; i++) {
            marks[i][j] = marks[i][j - 1];
        }
    }
    
    subjectNames[k] = newSubject;
    for (int i = 0; i < students; i++) {
        marks[i][k] = newMarks[i];
    }
    
    // Вывод
    for (int i = 0; i < students; i++) {
        for (int j = 0; j <= subjects; j++) {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
