

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string word = "abcdefghijkl";
    if(word.length() >= 12) {
        std::reverse(word.begin() + 2, word.begin() + 9);
        std::cout << "Результат: " << word << std::endl;
    } else {
        std::cout << "Слово должно содержать 12 букв" << std::endl;
    }
    return 0;
}
