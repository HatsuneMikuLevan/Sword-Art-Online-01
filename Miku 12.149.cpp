

#include <iostream>
#include <string>

int main() {
    std::string text = "В 2023 году было 365 дней.";
    int count = 0;
    
    for(char c : text) {
        if(c >= '0' && c <= '9') {
            count++;
        }
    }
    
    std::cout << "Количество цифр: " << count << std::endl;
    return 0;
}
