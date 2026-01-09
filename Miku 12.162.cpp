

#include <iostream>
#include <string>

int main() {
    std::string number;
    std::cout << "Введите вещественное число: ";
    std::cin >> number;
    
    int integerDigits = 0;
    int fractionalDigits = 0;
    bool foundDot = false;
    
    for(char c : number) {
        if(c == '.') {
            foundDot = true;
        } else if(c >= '0' && c <= '9') {
            if(foundDot) {
                fractionalDigits++;
            } else {
                integerDigits++;
            }
        }
    }
    
    std::cout << "а) Цифр в целой части: " << integerDigits << std::endl;
    std::cout << "б) Цифр в дробной части: " << fractionalDigits << std::endl;
    
    return 0;
}
