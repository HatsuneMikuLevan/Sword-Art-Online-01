

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
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
    
    set<string> result;
    for (auto& p : freq1) {
        if (p.second == 1 && freq2[p.first] == 1) {
            result.insert(p.first);
        }
    }
    
    cout << "Слова, встречающиеся в обоих предложениях ровно один раз: ";
    for (const string& w : result) cout << w << " ";
    cout << endl;
    
    return 0;
}
