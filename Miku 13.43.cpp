

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Team {
        string name;
        int points;
    } teams[19]; // заполнить и упорядочить по убыванию очков
    
    int newPoints;
    cout << "Enter new team points: ";
    cin >> newPoints;
    
    // а)
    int place = 1;
    while (place <= 19 && teams[place - 1].points > newPoints) {
        place++;
    }
    cout << "New team place: " << place << endl;
    
    // б)
    cout << "Teams with fewer points:" << endl;
    for (int i = 0; i < 19; i++) {
        if (teams[i].points < newPoints) {
            cout << teams[i].name << endl;
        }
    }
    
    return 0;
}
