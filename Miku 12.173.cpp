

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



#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main() {
    string w1 = "abc", w2 = "bcd", w3 = "cde";
    set<char> s1(w1.begin(), w1.end());
    set<char> s2(w2.begin(), w2.end());
    set<char> s3(w3.begin(), w3.end());
    map<char, int> freq;
    
    for (char c : s1) freq[c]++;
    for (char c : s2) freq[c]++;
    for (char c : s3) freq[c]++;
    
    cout << "Буквы, встречающиеся только в одном слове (без повторений): ";
    for (auto& p : freq) {
        if (p.second == 1) cout << p.first << " ";
    }
    cout << endl;
    return 0;
}
