

#include <iostream>
#include <string>
#include <climits>

int main() {
    std::string text = "Температуры: 25, 30, 18, 35 градусов";
    int maxNum = INT_MIN;
    int currentNum = 0;
    
    for(size_t i = 0; i <= text.length(); i++) {
        if(i < text.length() && text[i] >= '0' && text[i] <= '9') {
            currentNum = currentNum * 10 + (text[i] - '0');
        } else if(currentNum > 0) {
            if(currentNum > maxNum) {
                maxNum = currentNum;
            }
            currentNum = 0;
        }
    }
    
    if(maxNum != INT_MIN) {
        std::cout << "Максимальное число: " << maxNum << std::endl;
    } else {
        std::cout << "Числа не найдены" << std::endl;
    }
    
    return 0;
}
