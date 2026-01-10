

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s = "мама мыла раму";
    stringstream ss(s);
    vector<string> words;
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }
    
    if (words.size() > 1) {
        swap(words[0], words[words.size() - 1]);
    }
    
    for (const string& w : words) cout << w << " ";
    cout << endl;
    return 0;
}
