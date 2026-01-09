

#include <iostream>
#include <string>

int main() {
    std::string word = "программирование";
    int m, n;
    std::cout << "Введите позиции m и n (начиная с 0): ";
    std::cin >> m >> n;
    
    if(m >= 0 && n >= 0 && m < word.length() && n < word.length()) {
        std::swap(word[m], word[n]);
        std::cout << "Результат: " << word << std::endl;
    } else {
        std::cout << "Некорректные позиции" << std::endl;
    }
    return 0;
}
