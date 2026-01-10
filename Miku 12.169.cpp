

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string word1 = "процессор";
    string word2 = "информация";
    set<char> checked;
    
    for (char c : word1) {
        if (checked.find(c) != checked.end()) {
            continue; // уже проверяли
        }
        checked.insert(c);
        if (word2.find(c) != string::npos) {
            cout << "да ";
        } else {
            cout << "нет ";
        }
    }
    cout << endl;
    return 0;
}
