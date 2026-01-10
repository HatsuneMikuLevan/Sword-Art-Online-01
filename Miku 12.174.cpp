

#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string w1 = "abcd", w2 = "bcde", w3 = "cdef";
    set<char> s1(w1.begin(), w1.end());
    set<char> s2(w2.begin(), w2.end());
    set<char> s3(w3.begin(), w3.end());
    
    vector<char> common;
    for (char c : s1) {
        if (s2.count(c) && s3.count(c)) {
            common.push_back(c);
        }
    }
    
    cout << "Общие буквы: ";
    for (char c : common) cout << c << " ";
    cout << endl;
    return 0;
}
