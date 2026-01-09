

#include <iostream>
#include <string>

int main() {
    std::string word = "программирование_";
    int k;
    std::cout << "Введите k: ";
    std::cin >> k;
    
    if(k >= 0 && k < word.length() - 1) { // -1 для учета '_'
        word.insert(k, "m");
    }
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
