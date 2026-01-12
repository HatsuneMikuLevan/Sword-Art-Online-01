

#include <iostream>
#include <string>
using namespace std;

int countLetter(const string &s, char letter) {
    int count = 0;
    for (char c : s) {
        if (c == letter) count++;
    }
    return count;
}

int main() {
    string s1, s2, s3;
    char ch;
    cout << "Введите три предложения: " << endl;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    cout << "Введите букву для подсчета: ";
    cin >> ch;
    int total = countLetter(s1, ch) + countLetter(s2, ch) + countLetter(s3, ch);
    cout << "Общее количество букв '" << ch << "': " << total << endl;
    return 0;
}
