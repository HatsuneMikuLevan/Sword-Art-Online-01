

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Person {
        string surname;
        string address;
        string phone;
    } people[25]; // заполнить
    
    for (int i = 0; i < 25; i++) {
        if (people[i].phone.substr(0, 4) == "8905") { // или проверка по формату
            cout << people[i].surname << " " << people[i].address << endl;
        }
    }
    
    return 0;
}
