

#include <iostream>
#include <string>

int main() {
    std::string word = "abcdefgh";
    if(word.length() % 2 == 0) {
        for(size_t i = 0; i < word.length(); i += 2) {
            std::swap(word[i], word[i + 1]);
        }
        std::cout << "Результат: " << word << std::endl;
    } else {
        std::cout << "Слово должно иметь четную длину" << std::endl;
    }
    return 0;
}
