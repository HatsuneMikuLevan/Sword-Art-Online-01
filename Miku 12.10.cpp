
#include <iostream>
#include <string>

int main() {
    std::string sentence = "Это пример предложения для обработки";
    int n1, n2;
    
    std::cout << "Введите n1 и n2 (n1 <= n2): ";
    std::cin >> n1 >> n2;
    
    if(n1 >= 0 && n2 < sentence.length() && n1 <= n2) {
        sentence.erase(n1, n2 - n1 + 1);
        for(int i = 0; i < (n2 - n1 + 1); i++) {
            sentence += '_';
        }
        std::cout << "Результат: " << sentence << std::endl;
    } else {
        std::cout << "Некорректные значения n1 и n2" << std::endl;
    }
    
    return 0;
}
