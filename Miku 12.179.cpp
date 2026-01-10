

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s = "привет мир привет все";
    stringstream ss(s);
    string word;
    
    while (ss >> word) {
        if (word != "привет") {
            cout << word << " ";
        }
    }
    cout << endl;
    return 0;
}
