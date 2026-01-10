

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence = "мама мыла раму и еще что-то но слов должно быть десять";
    string words[10];
    int count = 0;
    string word = "";
    
    for (char c : sentence) {
        if (c == ' ') {
            if (!word.empty()) {
                words[count++] = word;
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty() && count < 10) {
        words[count++] = word;
    }
    
    for (int i = 0; i < count; i++) {
        cout << words[i] << endl;
    }
    return 0;
}
