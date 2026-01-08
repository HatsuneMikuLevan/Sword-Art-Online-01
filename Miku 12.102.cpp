

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t pos = s.find("ах");
    while (pos != string::npos) {
        s.replace(pos, 2, "ух");
        pos = s.find("ах", pos + 2);
    }
    
    cout << "Результат: " << s << endl;
    
    return 0;
}
