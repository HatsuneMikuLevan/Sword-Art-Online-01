

#include <iostream>
#include <string>

int main() {
    std::string text = "Цифры 12345 идут подряд";
    int number = 0;
    bool inNumber = false;
    
    for(char c : text) {
        if(c >= '0' && c <= '9') {
            number = number * 10 + (c - '0');
            inNumber = true;
        } else if(inNumber) {
            break; // Нашли первое число
        }
    }
    
    if(inNumber) {
        std::cout << "Число: " << number << std::endl;
    } else {
        std::cout << "Цифры не найдены" << std::endl;
    }
    
    return 0;
}
