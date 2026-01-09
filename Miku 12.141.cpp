

#include <iostream>
#include <string>

int main() {
    std::string word = "ИТЕРНЕТИ";
    // Перемещаем последнюю 'И' на вторую позицию
    char last = word[word.length() - 1];
    for(int i = word.length() - 1; i > 1; i--) {
        word[i] = word[i - 1];
    }
    word[1] = last;
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
