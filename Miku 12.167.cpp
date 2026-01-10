
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string word = "телефон";
    map<char, int> freq;
    
    for (char c : word) {
        freq[c]++;
    }
    
    cout << "Повторяющиеся буквы: ";
    for (auto& p : freq) {
        if (p.second == 2) {
            cout << p.first << " ";
        }
    }
    cout << endl;
    return 0;
}
