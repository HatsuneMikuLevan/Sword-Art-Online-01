

#include <iostream>
#include <string>

int main() {
    std::string word = "килбайт";
    // Вставляем 'о' после 'л'
    word.insert(3, "о");
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
