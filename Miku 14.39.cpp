

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindromeWord(const string &word) {
    string reversed = word;
    reverse(reversed.begin(), reversed.end());
    return word == reversed;
}

int main() {
    string w1, w2, w3;
    cout << "Введите три слова: ";
    cin >> w1 >> w2 >> w3;
    if (isPalindromeWord(w1)) cout << w1 << " - палиндром" << endl;
    if (isPalindromeWord(w2)) cout << w2 << " - палиндром" << endl;
    if (isPalindromeWord(w3)) cout << w3 << " - палиндром" << endl;
    return 0;
}
