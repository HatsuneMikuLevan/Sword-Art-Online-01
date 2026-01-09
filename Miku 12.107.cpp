
#include <iostream>
#include <string>

int main() {
    std::string s = "очепадка";
    size_t pos = s.find("очепадка");
    if(pos != std::string::npos) {
        s.replace(pos, 8, "опечатка");
    }
    std::cout << "Исправленная строка: " << s << std::endl;
    return 0;
}
