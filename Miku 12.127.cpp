

#include <iostream>
#include <string>

int main() {
    std::string phrase = "цена вещь";
    // Вставляем 'д' после 'ц'
    phrase.insert(1, "д");
    
    std::cout << "Исправленная фраза: " << phrase << std::endl;
    return 0;
}
