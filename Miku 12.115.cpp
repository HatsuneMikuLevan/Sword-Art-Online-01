

#include <iostream>
#include <string>

int main() {
    std::string word = "abracadabra";
    int firstA = -1, lastO = -1;
    
    // Находим первую 'a'
    for(size_t i = 0; i < word.length(); i++) {
        if(word[i] == 'a') {
            firstA = i;
            break;
        }
    }
    
    // Находим последнюю 'o'
    for(int i = word.length() - 1; i >= 0; i--) {
        if(word[i] == 'o') {
            lastO = i;
            break;
        }
    }
    
    if(firstA != -1 && lastO != -1) {
        std::swap(word[firstA], word[lastO]);
    }
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
