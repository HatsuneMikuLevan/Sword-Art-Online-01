

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s = "мама мыла раму круг";
    stringstream ss(s);
    string word, found;
    
    while (ss >> word) {
        if (!word.empty() && word[0] == 'к') {
            found = word;
            break;
        }
    }
    
    if (!found.empty()) {
        cout << "Найдено слово: " << found << endl;
    } else {
        cout << "Слово на 'к' не найдено" << endl;
    }
    return 0;
}
