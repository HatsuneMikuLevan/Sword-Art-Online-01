

#include <iostream>
#include <string>

int main() {
    std::string word = "алгоритм";
    // Уже правильно, но если бы была ошибка:
    // Например, "алгоримт" - нужно поменять местами 'м' и 'т'
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
