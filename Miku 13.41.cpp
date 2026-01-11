

#include <iostream>
using namespace std;

int main() {
    struct Game {
        int scored;
        int conceded;
    } games[22]; // заполнить
    
    int wins = 0, draws = 0, losses = 0;
    
    for (int i = 0; i < 22; i++) {
        if (games[i].scored > games[i].conceded) {
            cout << "Game " << i + 1 << ": выигрыш" << endl;
            wins++;
        } else if (games[i].scored < games[i].conceded) {
            cout << "Game " << i + 1 << ": проигрыш" << endl;
            losses++;
        } else {
            cout << "Game " << i + 1 << ": ничья" << endl;
            draws++;
        }
    }
    
    cout << "Wins: " << wins << ", Draws: " << draws << ", Losses: " << losses << endl;
    cout << "Total points: " << wins * 3 + draws << endl;
    
    return 0;
}
