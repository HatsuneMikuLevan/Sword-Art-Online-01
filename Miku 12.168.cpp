

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1 = "информация";
    string word2 = "процессор";
    
    for (char c : word1) {
        if (word2.find(c) != string::npos) {
            cout << "да ";
        } else {
            cout << "нет ";
        }
    }
    cout << endl;
    return 0;
}
