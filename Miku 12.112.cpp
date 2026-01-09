

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string word = "abcdefgh";
    if(word.length() % 2 == 0) {
        int half = word.length() / 2;
        for(int i = 0; i < half; i++) {
            std::swap(word[i], word[word.length() - 1 - i]);
        }
        std::cout << "Результат: " << word << std::endl;
    } else {
        std::cout << "Слово должно иметь четную длину" << std::endl;
    }
    return 0;
}
