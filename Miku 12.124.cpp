

#include <iostream>
#include <string>

int main() {
    std::string sentence = "Это предложение с буквами o";
    std::string result = "";
    
    for(size_t i = 0; i < sentence.length(); i++) {
        if((i % 2 == 0) && (sentence[i] == 'o' || sentence[i] == 'O')) {
            result += '_';
        } else {
            result += sentence[i];
        }
    }
    
    std::cout << "Результат: " << result << std::endl;
    return 0;
}
