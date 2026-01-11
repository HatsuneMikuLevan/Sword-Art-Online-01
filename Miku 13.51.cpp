

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    struct Game {
        string date;
        int scored, conceded;
    } games[30]; // заполнить
    
    ofstream file("results.txt");
    for (int i = 0; i < 30; i++) {
        file << games[i].date << " " << games[i].scored << ":" << games[i].conceded << endl;
    }
    file.close();
    
    return 0;
}
