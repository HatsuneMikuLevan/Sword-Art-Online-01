

#include <iostream>
#include <string>

int main() {
    std::string word = "колокол";
    
    // a) Удалить первую 'o'
    std::string wordA = word;
    size_t posA = wordA.find('o');
    if(posA != std::string::npos) {
        wordA.erase(posA, 1);
        wordA += '_';
    }
    std::cout << "а) " << wordA << std::endl;
    
    // б) Удалить последнюю 'л'
    std::string wordB = word;
    size_t posB = wordB.rfind('л');
    if(posB != std::string::npos) {
        wordB.erase(posB, 1);
        wordB += '_';
    }
    std::cout << "б) " << wordB << std::endl;
    
    return 0;
}
