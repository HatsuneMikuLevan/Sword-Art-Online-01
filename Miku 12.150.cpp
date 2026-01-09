

#include <iostream>
#include <string>
#include <climits>

int main() {
    std::string text = "В 2023 году максимальная температура была 38 градусов.";
    int sum = 0;
    int maxDigit = -1;
    
    for(char c : text) {
        if(c >= '0' && c <= '9') {
            int digit = c - '0';
            sum += digit;
            if(digit > maxDigit) {
                maxDigit = digit;
            }
        }
    }
    
    std::cout << "а) Сумма цифр: " << sum << std::endl;
    std::cout << "б) Максимальная цифра: " << maxDigit << std::endl;
    
    return 0;
}
