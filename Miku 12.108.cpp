

#include <iostream>
#include <string>

int main() {
    std::string word = "программирование";
    if(word.length() >= 5) {
        std::swap(word[1], word[4]);
        std::cout << "Результат: " << word << std::endl;
    } else {
        std::cout << "Слово слишком короткое" << std::endl;
    }
    return 0;
}
