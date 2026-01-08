

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t posI = s.find('и');
    size_t posK = s.find('к');
    
    if (posI < posK) {
        cout << "Буква 'и' встречается раньше." << endl;
    } else if (posK < posI) {
        cout << "Буква 'к' встречается раньше." << endl;
    } else {
        cout << "Буквы 'и' и 'к' встречаются на одной позиции или отсутствуют." << endl;
    }
    
    return 0;
}
