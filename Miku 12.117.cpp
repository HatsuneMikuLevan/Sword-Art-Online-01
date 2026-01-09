

#include <iostream>
#include <string>

int main() {
    std::string word = "программирование";
    
    // a) Удалить третью букву
    std::string wordA = word;
    if(wordA.length() >= 3) {
        wordA.erase(2, 1);
        wordA += '_';
    }
    std::cout << "а) " << wordA << std::endl;
    
    // б) Удалить k-ю букву
    std::string wordB = word;
    int k;
    std::cout << "Введите k: ";
    std::cin >> k;
    
    if(k >= 0 && k < wordB.length()) {
        wordB.erase(k, 1);
        wordB += '_';
        std::cout << "б) " << wordB << std::endl;
    } else {
        std::cout << "Некорректное значение k" << std::endl;
    }
    
    return 0;
}
