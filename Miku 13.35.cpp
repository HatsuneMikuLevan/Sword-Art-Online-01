
#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Team {
        string name;
        int points;
    } teams[20]; // заполнить
    
    // a)
    int maxPoints = -1;
    string champion;
    for (int i = 0; i < 20; i++) {
        if (teams[i].points > maxPoints) {
            maxPoints = teams[i].points;
            champion = teams[i].name;
        }
    }
    cout << "Champion: " << champion << endl;
    
    // б)
    int secondPoints = -1, thirdPoints = -1;
    string second, third;
    for (int i = 0; i < 20; i++) {
        if (teams[i].points > secondPoints && teams[i].name != champion) {
            thirdPoints = secondPoints;
            third = second;
            secondPoints = teams[i].points;
            second = teams[i].name;
        } else if (teams[i].points > thirdPoints && teams[i].name != champion) {
            thirdPoints = teams[i].points;
            third = teams[i].name;
        }
    }
    cout << "Second: " << second << ", Third: " << third << endl;
    
    return 0;
}
