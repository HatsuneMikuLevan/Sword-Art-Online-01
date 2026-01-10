

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string w1 = "abc", w2 = "bcd", w3 = "cde";
    map<char, int> freq;
    
    for (char c : w1) freq[c]++;
    for (char c : w2) freq[c]++;
    for (char c : w3) freq[c]++;
    
    cout << "Буквы, встречающиеся только в одном слове (с повторениями): ";
    for (char c : w1 + w2 + w3) {
        if (freq[c] == 1) cout << c;
    }
    cout << endl;
    return 0;
}
