

#include <iostream>
#include <string>

int main() {
    std::string word = "abcdefghijkl";
    if(word.length() == 12) {
        std::string result;
        for(int i = 0; i < 6; i++) {
            result += word[i];
            result += word[11 - i];
        }
        word = result;
    }
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
