

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t pos = s.find("да");
    while (pos != string::npos) {
        s.replace(pos, 2, "не");
        pos = s.find("да", pos + 2);
    }
    
    cout << "Результат: " << s << endl;
    
    return 0;
}
