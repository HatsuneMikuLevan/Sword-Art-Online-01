

#include <iostream>
#include <string>
using namespace std;

int countLetterI(const string &s) {
    int count = 0;
    for (char c : s) {
        if (c == 'и' || c == 'И') count++;
    }
    return count;
}

int main() {
    string s1, s2;
    cout << "Введите первое предложение: ";
    getline(cin, s1);
    cout << "Введите второе предложение: ";
    getline(cin, s2);
    int total = countLetterI(s1) + countLetterI(s2);
    cout << "Общее количество букв 'и': " << total << endl;
    return 0;
}
