

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    struct Team {
        string name;
        int points;
    } teams[20]; // заполнить
    
    // Сортировка по убыванию очков
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (teams[i].points < teams[j].points) {
                swap(teams[i], teams[j]);
            }
        }
    }
    
    for (int i = 0; i < 20; i++) {
        cout << i + 1 << ". " << teams[i].name << " (" << teams[i].points << ")" << endl;
    }
    
    return 0;
}
