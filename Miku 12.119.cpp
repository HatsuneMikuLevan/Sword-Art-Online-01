
#include <iostream>
#include <string>

int main() {
    std::string word = "программа";
    
    if(word.length() % 2 == 1) {
        // Нечетная длина - удаляем среднюю букву
        int middle = word.length() / 2;
        word.erase(middle, 1);
        word += '_';
    } else {
        // Четная длина - удаляем две средние буквы
        int middle = word.length() / 2 - 1;
        word.erase(middle, 2);
        word += "__";
    }
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
