

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Введите текст: ";
    getline(cin, text);
    
    int count = 0;
    size_t pos = text.find("или", 0);
    
    while (pos != string::npos) {
        count++;
        pos = text.find("или", pos + 3);
    }
    
    cout << "Слово 'или' встречается " << count << " раз(а)." << endl;
    
    return 0;
}
