

#include <iostream>
#include <string>

int main() {
    std::string str = "абвАБВ";
    
    for(char& c : str) {
        if(c == 'а') c = 'б';
        else if(c == 'б') c = 'а';
        else if(c == 'А') c = 'Б';
        else if(c == 'Б') c = 'А';
    }
    
    std::cout << "Результат: " << str << std::endl;
    return 0;
}
