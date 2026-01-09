

#include <iostream>
#include <string>

int main() {
    // a) Исправление "глиняный"
    std::string word1 = "глиняный";
    size_t pos1 = word1.find("ня");
    if(pos1 != std::string::npos) {
        word1.replace(pos1, 2, "нн");
    }
    std::cout << "а) " << word1 << std::endl;
    
    // б) Исправление "граффика"
    std::string word2 = "граффика";
    size_t pos2 = word2.find("фф");
    if(pos2 != std::string::npos) {
        word2.erase(pos2, 1);
    }
    std::cout << "б) " << word2 << std::endl;
    
    return 0;
}
