

#include <iostream>
#include <string>

bool isValidInteger(const std::string& text) {
    if(text.empty()) return false;
    
    // Пропускаем начальные пробелы
    size_t start = 0;
    while(start < text.length() && text[start] == ' ') {
        start++;
    }
    
    // Проверяем знак
    if(start < text.length() && (text[start] == '+' || text[start] == '-')) {
        start++;
    }
    
    // Должна быть хотя бы одна цифра
    if(start == text.length()) return false;
    
    // Проверяем остальные символы
    for(size_t i = start; i < text.length(); i++) {
        if(text[i] < '0' || text[i] > '9') {
            // Пропускаем конечные пробелы
            while(i < text.length() && text[i] == ' ') {
                i++;
            }
            return i == text.length();
        }
    }
    
    return true;
}

int main() {
    std::string text;
    std::cout << "Введите текст: ";
    std::getline(std::cin, text);
    
    if(isValidInteger(text)) {
        std::cout << "Это правильная десятичная запись целого числа" << std::endl;
    } else {
        std::cout << "Это НЕ правильная десятичная запись целого числа" << std::endl;
    }
    
    return 0;
}
