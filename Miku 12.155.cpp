

#include <iostream>
#include <string>

int main() {
    std::string text = "1-2+3-4+5";
    int sum = 0;
    int currentNum = 0;
    bool isPositive = true;
    
    for(size_t i = 0; i < text.length(); i++) {
        char c = text[i];
        
        if(c >= '0' && c <= '9') {
            currentNum = currentNum * 10 + (c - '0');
        }
        
        if(c == '+'  c == '-'  i == text.length() - 1) {
            sum += isPositive ? currentNum : -currentNum;
            currentNum = 0;
            isPositive = (c == '+');
        }
    }
    
    std::cout << "Алгебраическая сумма: " << sum << std::endl;
    return 0;
}
