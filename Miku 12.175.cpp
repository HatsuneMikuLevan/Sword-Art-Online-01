

#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main() {
    string w1 = "abc", w2 = "bcd", w3 = "cde";
    map<char, int> freq;
    
    for (char c : w1) freq[c]++;
    for (char c : w2) freq[c]++;
    for (char c : w3) freq[c]++;
    
    cout << "Неповторяющиеся буквы: ";
    for (auto& p : freq) {
        if (p.second == 1) cout << p.first << " ";
    }
    cout << endl;
    return 0;
}
