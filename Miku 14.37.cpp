

#include <iostream>
#include <string>
using namespace std;

double letterPercentage(const string &s, char letter) {
    int count = 0;
    for (char c : s) {
        if (c == letter) count++;
    }
    return (s.length() > 0) ? (count * 100.0 / s.length()) : 0;
}

int main() {
    string s1, s2;
    cout << "Введите первое предложение: ";
    getline(cin, s1);
    cout << "Введите второе предложение: ";
    getline(cin, s2);
    double p1 = letterPercentage(s1, 'о');
    double p2 = letterPercentage(s2, 'о');
    if (p1 > p2) cout << "В первом предложении доля 'о' больше" << endl;
    else if (p1 < p2) cout << "Во втором предложении доля 'о' больше" << endl;
    else cout << "Доли равны" << endl;
    return 0;
}
