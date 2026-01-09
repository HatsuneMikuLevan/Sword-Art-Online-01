

#include <iostream>

int main() {
    char c;
    std::cout << "Введите символ: ";
    std::cin >> c;
    
    if(c >= '0' && c <= '9') {
        std::cout << "Это цифра" << std::endl;
    } else {
        std::cout << "Это не цифра" << std::endl;
    }
    
    return 0;
}
