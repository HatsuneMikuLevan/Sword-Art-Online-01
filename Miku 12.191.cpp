

#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

bool hasUniqueLetters(const string& w) {
    set<char> letters(w.begin(), w.end());
    return letters.size() == w.length();
}

bool isSymmetric(const string& w) {
    int n = w.length();
    for (int i = 0; i < n / 2; i++) {
        if (w[i] != w[n - i - 1]) return false;
    }
    return true;
}

int main() {
    string s = "казак мир тест привет";
    stringstream ss(s);
    string firstWord, word;
    ss >> firstWord;
    
    cout << "а) Слова без повторяющихся букв: ";
    while (ss >> word) {
        if (word != firstWord && hasUniqueLetters(word)) {
            cout << word << " ";
        }
    }
    cout << endl;
    
    ss.clear();
    ss.str(s);
    ss >> firstWord;
    cout << "б) Симметричные слова: ";
    while (ss >> word) {
        if (word != firstWord && isSymmetric(word)) {
            cout << word << " ";
        }
    }
    cout << endl;
    
    return 0;
}
