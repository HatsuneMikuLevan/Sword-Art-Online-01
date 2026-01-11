

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    struct Student {
        string surname;
        double height;
    } students[15]; // заполнить и упорядочить по убыванию роста
    
    double newHeight;
    cout << "Enter new student's height: ";
    cin >> newHeight;
    
    // а)
    cout << "Students shorter than new:" << endl;
    for (int i = 0; i < 15; i++) {
        if (students[i].height < newHeight) {
            cout << students[i].surname << endl;
        }
    }
    
    // б)
    int insertPos = 0;
    while (insertPos < 15 && students[insertPos].height > newHeight) {
        insertPos++;
    }
    cout << "Insert after: " << students[insertPos - 1].surname << endl;
    
    // в)
    double minDiff = 1e9;
    string closestStudent;
    for (int i = 0; i < 15; i++) {
        double diff = abs(students[i].height - newHeight);
        if (diff < minDiff) {
            minDiff = diff;
            closestStudent = students[i].surname;
        }
    }
    cout << "Closest height: " << closestStudent << endl;
    
    return 0;
}
