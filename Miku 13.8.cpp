

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Person {
        string surname;
        bool isMarried;
        bool hasChildren;
    } people[25]; // заполнить
    
    for (int i = 0; i < 25; i++) {
        if (people[i].isMarried && people[i].hasChildren) {
            cout << people[i].surname << endl;
        }
    }
    
    return 0;
}
