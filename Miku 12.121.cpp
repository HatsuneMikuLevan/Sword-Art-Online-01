
#include <iostream>
#include <string>

int main() {
    std::string sentence = "Эта строка содержит несколько букв c";
    std::string result = "";
    
    for(char c : sentence) {
        if(c != 'c' && c != 'C') {
            result += c;
        }
    }
    
    // Добавляем '_' на место удаленных символов
    int removed = sentence.length() - result.length();
    for(int i = 0; i < removed; i++) {
        result += '_';
    }
    
    std::cout << "Результат: " << result << std::endl;
    return 0;
}
