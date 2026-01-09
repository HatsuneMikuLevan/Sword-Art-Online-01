

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string word = "abcdefghijklmno";
    int k, s;
    std::cout << "Введите k и s (k < s): ";
    std::cin >> k >> s;
    
    if(k >= 0 && s < word.length() && k + 1 < s - 1) {
        std::reverse(word.begin() + k + 1, word.begin() + s - 1);
        std::cout << "Результат: " << word << std::endl;
    } else {
        std::cout << "Некорректные значения k и s" << std::endl;
    }
    return 0;
}
