

#include <iostream>
#include <string>

int main() {
    std::string expression = "1+25+5";
    int sum = 0;
    int currentNum = 0;
    
    for(size_t i = 0; i <= expression.length(); i++) {
        if(i < expression.length() && expression[i] >= '0' && expression[i] <= '9') {
            currentNum = currentNum * 10 + (expression[i] - '0');
        } else {
            sum += currentNum;
            currentNum = 0;
        }
    }
    
    std::cout << "Сумма: " << sum << std::endl;
    return 0;
}
