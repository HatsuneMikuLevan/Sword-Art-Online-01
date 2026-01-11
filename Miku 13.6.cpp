

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Car {
        string model;
        int maxSpeed;
    } cars[20]; // заполнить
    
    for (int i = 0; i < 20; i++) {
        if (cars[i].maxSpeed > 180) {
            cout << cars[i].model << endl;
        }
    }
    
    return 0;
}
