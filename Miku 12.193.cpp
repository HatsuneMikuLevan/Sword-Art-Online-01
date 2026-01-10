

#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

int main() {
    string s1 = "мама мыла маму раму";
    string s2 = "мыла мама окно";
    set<string> words2, checked;
    
    stringstream ss2(s2);
    string word;
    while (ss2 >> word) words2.insert(word);
    
    stringstream ss1(s1);
    while (ss1 >> word) {
        if (checked.find(word) != checked.end()) continue;
        checked.insert(word);
        if (words2.find(word) != words2.end()) {
            cout << "да ";
        } else {
            cout << "нет ";
        }
    }
    cout << endl;
    return 0;
}
