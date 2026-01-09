

#include <iostream>
#include <string>

int main() {
    std::string word = "программирование";
    int s, k;
    std::cout << "Введите s и k (s > k): ";
    std::cin >> s >> k;
    
    if(k >= 0 && s < word.length() && s > k) {
        char temp = word[s];
        for(int i = s; i > k; i--) {
            word[i] = word[i - 1];
        }
        word[k] = temp;
    }
    
    std::cout << "Результат: " << word << std::endl;
    return 0;
}
