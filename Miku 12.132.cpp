

#include <iostream>
#include <string>

int main() {
    // а) исправление "процессор"
    std::string word1 = "процессор";
    word1.erase(3, 1); // удаляем лишнюю 'с'
    std::cout << "а) " << word1 << std::endl;
    
    // б) исправление "текстовыйфайл"
    std::string phrase1 = "текстовыйфайл";
    phrase1.insert(9, " ");
    std::cout << "б) " << phrase1 << std::endl;
    
    // в) исправление "програма и аллоритам"
    std::string phrase2 = "програма и аллоритам";
    phrase2.insert(6, "м"); // добавляем 'м' в "програма"
    phrase2.replace(phrase2.find("аллоритам"), 9, "алгоритм");
    std::cout << "в) " << phrase2 << std::endl;
    
    // г) исправление "процессор и память"
    std::string phrase3 = "процессор и память";
    // (уже правильно, но если бы была ошибка)
    std::cout << "г) " << phrase3 << " (уже правильно)" << std::endl;
    
    return 0;
}
