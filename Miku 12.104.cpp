

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t pos = s.find("про");
    while (pos != string::npos) {
        s.replace(pos, 3, "нет");
        pos = s.find("про", pos + 3);
    }
    
    cout << "Результат: " << s << endl;
    
    return 0;
}
