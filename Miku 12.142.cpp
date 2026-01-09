

#include <iostream>
#include <string>

int main() {
    std::string word = "программа";
    int k;
    std::cout << "Введите k: ";
    std::cin >> k;
    
    if(k >= 0 && k < word.length()) {
        char last = word[word.length() - 1];
        for(int i = word.length() - 1; i > k; i--) {
            word[i] = word[i - 1];
        }
        word[k] = last;
    }
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
