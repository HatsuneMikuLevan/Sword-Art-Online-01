

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s = "норма круг топор народ";
    stringstream ss(s);
    string word;
    int startsWithN = 0, endsWithR = 0;
    
    while (ss >> word) {
        if (!word.empty() && word[0] == 'н') startsWithN++;
        if (!word.empty() && word.back() == 'р') endsWithR++;
    }
    
    cout << "Начинающихся с 'н': " << startsWithN << endl;
    cout << "Оканчивающихся на 'р': " << endsWithR << endl;
    return 0;
}
