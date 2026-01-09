

#include <iostream>
#include <string>

int main() {
    long long number;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;
    
    if(number == 0) {
        std::cout << "Количество цифр: 1" << std::endl;
        return 0;
    }
    
    int count = 0;
    while(number > 0) {
        count++;
        number /= 10;
    }
    
    std::cout << "Количество цифр: " << count << std::endl;
    return 0;
}
