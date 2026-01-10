

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s = "мама мыла раму";
    stringstream ss(s);
    string word, longest;
    
    while (ss >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }
    
    cout << "Самое длинное слово: " << longest << endl;
    return 0;
}
