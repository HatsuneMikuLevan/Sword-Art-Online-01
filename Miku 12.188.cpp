

#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

int main() {
    string s = "мама мыла маму раму мыла";
    stringstream ss(s);
    set<string> uniqueWords;
    string word;
    
    while (ss >> word) {
        uniqueWords.insert(word);
    }
    
    for (const string& w : uniqueWords) cout << w << " ";
    cout << endl;
    return 0;
}
