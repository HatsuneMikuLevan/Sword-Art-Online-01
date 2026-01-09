

#include <iostream>
#include <string>

int main() {
    std::string word = "роцессор";
    // Перемещаем 'р' из начала в конец
    char first = word[0];
    for(size_t i = 0; i < word.length() - 1; i++) {
        word[i] = word[i + 1];
    }
    word[word.length() - 1] = first;
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
