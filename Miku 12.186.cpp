

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareLength(const string& a, const string& b) {
    return a.length() < b.length();
}

int main() {
    string s = "я мыла мама раму";
    stringstream ss(s);
    vector<string> words;
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }
    
    sort(words.begin(), words.end(), compareLength);
    
    for (const string& w : words) cout << w << " ";
    cout << endl;
    return 0;
}
