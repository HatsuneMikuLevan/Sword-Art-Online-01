

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
    
    for (char c = 'a'; c <= 'z'; c++) {
        if (freq1[c] == 1 && freq2[c] == 1) {
            cout << c << " ";
        }
    }
    for (char c = 'а'; c <= 'я'; c++) {
        if (freq1[c] == 1 && freq2[c] == 1) {
            cout << c << " ";
        }
    }
    cout << endl;
    return 0;
}
