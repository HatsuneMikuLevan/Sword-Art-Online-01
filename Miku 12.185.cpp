

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
    
    bool moreThan10 = longest.length() > 10;
    cout << "Самое длинное слово: " << longest << " (длина " << longest.length() << ")" << endl;
    cout << "Длина > 10? " << (moreThan10 ? "Да" : "Нет") << endl;
    return 0;
}
