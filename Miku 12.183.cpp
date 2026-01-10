

#include <iostream>
#include <string>
#include <sstream>
#include <climits>
using namespace std;

int main() {
    string s = "мама мыла раму";
    stringstream ss(s);
    string word;
    int minLen = INT_MAX;
    
    while (ss >> word) {
        if (word.length() < minLen) {
            minLen = word.length();
        }
    }
    
    cout << "Длина самого короткого слова: " << minLen << endl;
    return 0;
}
