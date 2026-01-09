

#include <iostream>
#include <string>

int main() {
    std::string text = "abc12345def6789gh12";
    int maxCount = 0;
    int currentCount = 0;
    
    for(char c : text) {
        if(c >= '0' && c <= '9') {
            currentCount++;
            if(currentCount > maxCount) {
                maxCount = currentCount;
            }
        } else {
            currentCount = 0;
        }
    }
    
    std::cout << "Наибольшее количество идущих подряд цифр: " << maxCount << std::endl;
    return 0;
}
