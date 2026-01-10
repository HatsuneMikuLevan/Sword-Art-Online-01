

#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string s1 = "мама мыла раму";
    string s2 = "мыла мама окно";
    map<string, int> freq1, freq2;
    
    stringstream ss1(s1);
    string word;
    while (ss1 >> word) freq1[word]++;
    
    stringstream ss2(s2);
    while (ss2 >> word) freq2[word]++;
    
    cout << "Слова только в первом: ";
    for (auto& p : freq1) {
        if (freq2[p.first] == 0) {
            for (int i = 0; i < p.second; i++) cout << p.first << " ";
        }
    }
    cout << endl;
    
    cout << "Слова только во втором: ";
    for (auto& p : freq2) {
        if (freq1[p.first] == 0) {
            for (int i = 0; i < p.second; i++) cout << p.first << " ";
        }
    }
    cout << endl;
    
    return 0;
}
