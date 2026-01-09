

#include <iostream>
#include <string>
#include <climits>

int main() {
    std::string text = "   123 456 789";
    int maxDigit = -1;
    int maxPos = -1;
    int currentPos = 0;
    bool started = false;
    
    for(size_t i = 0; i < text.length(); i++) {
        if(text[i] != ' ') {
            started = true;
        }
        
        if(started && text[i] >= '0' && text[i] <= '9') {
            int digit = text[i] - '0';
            if(digit > maxDigit) {
                maxDigit = digit;
                maxPos = currentPos;
            }
        }
        
        if(started) {
            currentPos++;
        }
    }
    
    if(maxPos != -1) {
        std::cout << "Номер максимальной цифры: " << maxPos + 1 << std::endl;
    } else {
        std::cout << "Цифры не найдены" << std::endl;
    }
    
    return 0;
}
