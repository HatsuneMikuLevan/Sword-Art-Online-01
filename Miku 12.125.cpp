
#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string cleaned;
    for(char c : str) {
        if(c != ' ' && c != '_') {
            cleaned += std::tolower(c);
        }
    }
    
    std::string reversed = cleaned;
    std::reverse(reversed.begin(), reversed.end());
    
    return cleaned == reversed;
}

int main() {
    std::string phrases[3] = {
        "АРГЕНТИНА МАНИТ НЕГРА",
        "ПОТ КАК ПОТОП",
        "А РОЗА УПАЛА НА ЛАПУ АЗОРА"
    };
    
    for(int i = 0; i < 3; i++) {
        std::cout << (i == 0 ? "а) " : i == 1 ? "б) " : "в) ");
        std::cout << phrases[i] << " - ";
        std::cout << (isPalindrome(phrases[i]) ? "палиндром" : "не палиндром") << std::endl;
    }
    
    return 0;
}
