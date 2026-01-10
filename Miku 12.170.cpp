

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string word1 = "процессор";
    string word2 = "информация";
    
    map<char, int> freq1, freq2;
    for (char c : word1) freq1[c]++;
    for (char c : word2) freq2[c]++;
    
    for (auto& p : freq1) {
        if (p.second > 0 && freq2[p.first] == 0) {
            for (int i = 0; i < p.second; i++) cout << p.first;
        }
    }
    for (auto& p : freq2) {
        if (p.second > 0 && freq1[p.first] == 0) {
            for (int i = 0; i < p.second; i++) cout << p.first;
        }
    }
    cout << endl;
    return 0;
}
