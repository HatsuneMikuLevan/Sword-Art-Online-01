

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
using namespace std;

string replaceFirstAtoO(const string& w) {
    string result = w;
    size_t pos = result.find('а');
    if (pos != string::npos) result[pos] = 'о';
    return result;
}

string removeLastLetterOccurrences(const string& w) {
    if (w.empty()) return w;
    char last = w.back();
    string result;
    for (size_t i = 0; i < w.length() - 1; i++) {
        if (w[i] != last) result += w[i];
    }
    result += last;
    return result;
}

string keepFirstOccurrences(const string& w) {
    set<char> seen;
    string result;
    for (char c : w) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            result += c;
        }
    }
    return result;
}

string removeMiddleLetters(const string& w) {
    if (w.length() <= 2) return w;
    int mid = w.length() / 2;
    if (w.length() % 2 == 0) {
        return w.substr(0, mid - 1) + w.substr(mid + 1);
    } else {
        return w.substr(0, mid) + w.substr(mid + 1);
    }
}

int main() {
    string s = "мама мыла раму";
    stringstream ss(s);
    vector<string> words;
    string word, longest;
    
    while (ss >> word) {
        words.push_back(word);
        if (word.length() > longest.length()) longest = word;
    }
    
    for (string w : words) {
        cout << "Исходное: " << w << endl;
        cout << "а) " << replaceFirstAtoO(w) << endl;
        cout << "б) " << removeLastLetterOccurrences(w) << endl;
        cout << "в) " << keepFirstOccurrences(w) << endl;
        if (w == longest) {
            cout << "г) " << removeMiddleLetters(w) << " (самое длинное)" << endl;
        }
        cout << endl;
    }
    return 0;
}
