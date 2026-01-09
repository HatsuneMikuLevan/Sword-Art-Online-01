

#include <iostream>
#include <string>

int main() {
    std::string word = "программа";
    int k;
    std::cout << "Введите k: ";
    std::cin >> k;
    
    if(k >= 1 && k < word.length()) {
        char first = word[0];
        for(int i = 0; i < k - 1; i++) {
            word[i] = word[i + 1];
        }
        word[k - 1] = first;
    }
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
