

#include <iostream>
#include <string>

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int main() {
    std::string s = "Это пример строки с примером подстроки";
    std::string from = "пример";
    std::string to = "образец";
    
    replaceAll(s, from, to);
    std::cout << "Результат: " << s << std::endl;
    return 0;
}
