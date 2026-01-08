

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    for (size_t i = 1; i < s.length(); i += 2) {
        s[i] = 'м';
    }
    
    cout << "Результат: " << s << endl;
    
    return 0;
}
