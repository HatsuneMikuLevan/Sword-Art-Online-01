

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int m, n;
    
    cout << "Введите строку: ";
    getline(cin, s);
    cout << "Введите m и n (индексы с 1): ";
    cin >> m >> n;
    
    if (m < 1  n > s.length()  m > n) {
        cout << "Некорректные индексы." << endl;
        return 0;
    }
    
    string substring = s.substr(m - 1, n - m + 1);
    
    if (substring == "666") {
        cout << "Да, образует число 666." << endl;
    } else {
        cout << "Нет, не образует число 666." << endl;
    }
    
    return 0;
}
