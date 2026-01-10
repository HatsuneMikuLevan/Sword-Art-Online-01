

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s = "казак уровень тест око";
    stringstream ss(s);
    string word;
    
    cout << "а) Начинаются и заканчиваются одинаково: ";
    while (ss >> word) {
        if (!word.empty() && word[0] == word.back()) {
            cout << word << " ";
        }
    }
    cout << endl;
    
    ss.clear();
    ss.str(s);
    cout << "б) Содержат ровно три 'е': ";
    while (ss >> word) {
        int countE = 0;
        for (char c : word) if (c == 'е') countE++;
        if (countE == 3) cout << word << " ";
    }
    cout << endl;
    
    ss.clear();
    ss.str(s);
    cout << "в) Содержат хотя бы одну 'о': ";
    while (ss >> word) {
        if (word.find('о') != string::npos) {
            cout << word << " ";
        }
    }
    cout << endl;
    
    return 0;
}
