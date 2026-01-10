

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string word = "программирование";
    set<char> uniqueLetters;
    
    for (char c : word) {
        uniqueLetters.insert(c);
    }
    
    cout << "Различных букв: " << uniqueLetters.size() << endl;
    return 0;
}
