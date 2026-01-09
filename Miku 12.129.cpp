

#include <iostream>
#include <string>

int main() {
    std::string word = "программирование_";
    int k;
    char letter;
    
    std::cout << "Введите номер позиции k: ";
    std::cin >> k;
    std::cout << "Введите букву для вставки: ";
    std::cin >> letter;
    
    if(k >= 0 && k < word.length() - 1) {
        word.insert(k, 1, letter);
    }
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
