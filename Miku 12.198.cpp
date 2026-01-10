

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string text = "мама мыла раму";
    int targetLength = 20;
    
    stringstream ss(text);
    vector<string> words;
    string word;
    int totalLetters = 0;
    
    while (ss >> word) {
        words.push_back(word);
        totalLetters += word.length();
    }
    
    int totalSpaces = targetLength - totalLetters;
    int gaps = words.size() - 1;
    if (gaps <= 0) {
        cout << text << endl;
        return 0;
    }
    
    int baseSpaces = totalSpaces / gaps;
    int extraSpaces = totalSpaces % gaps;
    
    string result;
    for (size_t i = 0; i < words.size(); i++) {
        result += words[i];
        if (i < words.size() - 1) {
            int spaces = baseSpaces + (extraSpaces > 0 ? 1 : 0);
            extraSpaces--;
            result += string(spaces, ' ');
        }
    }
    
    cout << result << endl;
    return 0;
}
