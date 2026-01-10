

#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string s = "мама мыла маму раму мыла";
    stringstream ss(s);
    map<string, int> freq;
    string word;
    
    while (ss >> word) {
        freq[word]++;
    }
    
    cout << "Повторяющиеся слова: ";
    for (auto& p : freq) {
        if (p.second == 2) {
            cout << p.first << " ";
        }
    }
    cout << endl;
    return 0;
}
