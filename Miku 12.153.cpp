

#include <iostream>
#include <string>

int main() {
    std::string text = "123456789";
    int sum = 0;
    
    for(char c : text) {
        if(c >= '0' && c <= '9') {
            sum += c - '0';
        }
    }
    
    std::cout << "Сумма цифр: " << sum << std::endl;
    return 0;
}
