

#include <iostream>
#include <string>

int main() {
    std::string word = "шифрмаца";
    // Перемещаем 'ц' на позицию после 'р'
    char temp = word[5]; // 'ц'
    for(int i = 5; i > 4; i--) {
        word[i] = word[i - 1];
    }
    word[4] = temp;
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
