

#include <iostream>
#include <string>

int main() {
    std::string text = "В 2023 году было 365 дней, а в 2024 - 366 дней.";
    
    std::cout << "Цифры в тексте: ";
    for(char c : text) {
        if(c >= '0' && c <= '9') {
            std::cout << c << " ";
        }
    }
    std::cout << std::endl;
    
    return 0;
}
