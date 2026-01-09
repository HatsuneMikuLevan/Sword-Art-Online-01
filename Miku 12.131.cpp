

#include <iostream>
#include <string>

int main() {
    std::string sentence = "Эта строка содержит букву u_";
    char letter = 'x';
    
    size_t pos = sentence.rfind('u');
    if(pos != std::string::npos) {
        sentence.insert(pos, 1, letter);
    }
    
    std::cout << "Результат: " << sentence << std::endl;
    return 0;
}
