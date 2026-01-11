

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    struct Student {
        string surname;
        double height;
    } students[25]; // заполнить
    
    // Сортировка по возрастанию роста
    for (int i = 0; i < 25 - 1; i++) {
        for (int j = i + 1; j < 25; j++) {
            if (students[i].height > students[j].height) {
                swap(students[i], students[j]);
            }
        }
    }
    
    for (int i = 0; i < 25; i++) {
        cout << students[i].surname << " " << students[i].height << endl;
    }
    
    return 0;
}
