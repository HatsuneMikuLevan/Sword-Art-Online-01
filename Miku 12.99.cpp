

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    for (char &c : s) {
        if (c == ' ') c = '_';
    }
    
    cout << "Результат: " << s << endl;
    
    return 0;
}
