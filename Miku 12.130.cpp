

#include <iostream>
#include <string>

int main() {
    std::string word = "программу_";
    char letter = 'р';
    
    size_t pos = word.find('u');
    if(pos != std::string::npos) {
        word.insert(pos + 1, 1, letter);
    }
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
