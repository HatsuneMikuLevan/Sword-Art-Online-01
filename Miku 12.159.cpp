

#include <iostream>
#include <string>

int main() {
    std::string text = "В 2023 году было 365 дней, а в 2024 году - 366 дней";
    int sum = 0;
    int currentNum = 0;
    
    for(size_t i = 0; i <= text.length(); i++) {
        if(i < text.length() && text[i] >= '0' && text[i] <= '9') {
            currentNum = currentNum * 10 + (text[i] - '0');
        } else if(currentNum > 0) {
            sum += currentNum;
            currentNum = 0;
        }
    }
    
    std::cout << "Сумма всех чисел: " << sum << std::endl;
    return 0;
}
