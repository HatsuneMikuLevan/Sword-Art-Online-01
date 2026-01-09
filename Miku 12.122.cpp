

#include <iostream>
#include <string>

int main() {
    std::string str = "Это строка с несколькими пробелами";
    std::string result = "";
    
    for(char c : str) {
        if(c != ' ') {
            result += c;
        }
    }
    
    // Добавляем '_' на место удаленных пробелов
    int spaces = str.length() - result.length();
    for(int i = 0; i < spaces; i++) {
        result += '_';
    }
    
    std::cout << "Результат: " << result << std::endl;
    return 0;
}
