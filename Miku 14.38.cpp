

#include <iostream>
#include <string>
using namespace std;

int lastOccurrenceIndex(const string &s, char letter) {
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == letter) return i + 1; // +1 для порядкового номера
    }
    return -1; // не найдено
}

int main() {
    string s1, s2;
    cout << "Введите первое предложение: ";
    getline(cin, s1);
    cout << "Введите второе предложение: ";
    getline(cin, s2);
    int idx1 = lastOccurrenceIndex(s1, 'и');
    int idx2 = lastOccurrenceIndex(s2, 'и');
    if (idx1 > idx2) cout << "В первом предложении 'и' имеет больший порядковый номер" << endl;
    else if (idx1 < idx2) cout << "Во втором предложении 'и' имеет больший порядковый номер" << endl;
    else if (idx1 == -1 && idx2 == -1) cout << "Буква 'и' не найдена" << endl;
    else cout << "Порядковые номера равны" << endl;
    return 0;
}
