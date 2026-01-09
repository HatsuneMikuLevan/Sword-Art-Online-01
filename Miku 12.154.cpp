

#include <iostream>
#include <string>

int main() {
    std::string text = "1+2+3+4+5";
    int sum = 0;
    int currentNum = 0;
    
    for(char c : text) {
        if(c >= '0' && c <= '9') {
            currentNum = currentNum * 10 + (c - '0');
        } else if(c == '+') {
            sum += currentNum;
            currentNum = 0;
        }
    }
    
    // Добавляем последнее число
    sum += currentNum;
    
    std::cout << "Сумма: " << sum << std::endl;
    return 0;
}
