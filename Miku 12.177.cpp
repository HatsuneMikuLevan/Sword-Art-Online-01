

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
    
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }
    cout << endl;
    return 0;
}
