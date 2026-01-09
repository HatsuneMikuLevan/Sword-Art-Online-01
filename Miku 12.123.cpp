

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string word = "программирование";
    std::string result = "";
    std::vector<bool> seen(256, false);
    
    for(char c : word) {
        if(!seen[static_cast<unsigned char>(c)]) {
            result += c;
            seen[static_cast<unsigned char>(c)] = true;
        }
    }
    
    // Добавляем '_' на место удаленных символов
    int removed = word.length() - result.length();
    for(int i = 0; i < removed; i++) {
        result += '_';
    }
    
    std::cout << "Результат: " << result << std::endl;
    return 0;
}
