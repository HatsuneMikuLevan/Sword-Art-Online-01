

#include <iostream>
#include <string>
#include <map>
using namespace std;

bool canFormWithoutRepeats(const string& source, const string& target) {
    map<char, int> freqSource;
    for (char c : source) freqSource[c]++;
    
    for (char c : target) {
        if (freqSource[c] == 0) return false;
    }
    return true;
}

bool canFormWithExactCounts(const string& source, const string& target) {
    map<char, int> freqSource, freqTarget;
    for (char c : source) freqSource[c]++;
    for (char c : target) freqTarget[c]++;
    
    for (auto& p : freqTarget) {
        if (freqSource[p.first] < p.second) return false;
    }
    return true;
}

int main() {
    string word1 = "привет";
    string word2 = "тевирп";
    
    cout << "1) Без учёта повторений: " << (canFormWithoutRepeats(word1, word2) ? "можно" : "нельзя") << endl;
    cout << "2) С учётом повторений: " << (canFormWithExactCounts(word1, word2) ? "можно" : "нельзя") << endl;
    return 0;
}
