

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Athlete {
        string surname;
        int scores[5];
    } athletes[20]; // заполнить
    
    int maxTotal = -1;
    string winner;
    
    for (int i = 0; i < 20; i++) {
        int total = 0;
        for (int j = 0; j < 5; j++) total += athletes[i].scores[j];
        
        if (total > maxTotal) {
            maxTotal = total;
            winner = athletes[i].surname;
        }
    }
    
    cout << "Winner: " << winner << endl;
    
    return 0;
}
