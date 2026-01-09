

#include <iostream>
#include <string>

int main() {
    std::string word = "программа";
    if(word.length() >= 3) {
        std::swap(word[2], word[word.length() - 1]);
        std::cout << "Результат: " << word << std::endl;
    } else {
        std::cout << "Слово слишком короткое" << std::endl;
    }
    return 0;
}
