
#include <iostream>
#include <string>

int main() {
    std::string word = "спеклянный";
    // Вставляем 'е' после 'п'
    word.insert(1, "е");
    
    std::cout << "Исправленное слово: " << word << std::endl;
    return 0;
}
