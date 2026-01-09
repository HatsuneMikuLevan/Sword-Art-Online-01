

#include <iostream>
#include <string>

int main() {
    std::string text = "1+2-3+4-5";
    int sum = 0;
    int currentNum = 0;
    char sign = '+';
    
    for(size_t i = 0; i <= text.length(); i++) {
        if(i < text.length() && text[i] >= '0' && text[i] <= '9') {
            currentNum = currentNum * 10 + (text[i] - '0');
        } else {
            if(sign == '+') {
                sum += currentNum;
            } else {
                sum -= currentNum;
            }
            
            currentNum = 0;
            if(i < text.length()) {
                sign = text[i];
            }
        }
    }
    
    std::cout << "Алгебраическая сумма: " << sum << std::endl;
    return 0;
}
