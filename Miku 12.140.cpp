

#include <iostream>
#include <string>

int main() {
    std::string word = "программа";
    if(word.length() > 1) {
        char last = word[word.length() - 1];
        for(int i = word.length() - 1; i > 0; i--) {
            word[i] = word[i - 1];
        }
        word[0] = last;
    }
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
