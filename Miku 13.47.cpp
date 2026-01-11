

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Team {
        string name;
        int points;
    } teams[19]; // заполнить и упорядочить по убыванию
    
    Team newTeam;
    cout << "Enter new team name and points: ";
    cin >> newTeam.name >> newTeam.points;
    
    int pos = 0;
    while (pos < 19 && teams[pos].points > newTeam.points) {
        pos++;
    }
    
    for (int i = 19; i > pos; i--) {
        teams[i] = teams[i - 1];
    }
    teams[pos] = newTeam;
    
    for (int i = 0; i <= 19; i++) {
        cout << teams[i].name << " " << teams[i].points << endl;
    }
    
    return 0;
}
