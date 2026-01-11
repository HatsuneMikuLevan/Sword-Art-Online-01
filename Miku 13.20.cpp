

#include <iostream>
using namespace std;

int main() {
    struct Car {
        string model;
        int power;
        double price;
    } cars[30]; // заполнить
    
    double totalPrice = 0;
    for (int i = 0; i < 30; i++) {
        if (cars[i].power > 100) {
            totalPrice += cars[i].price;
        }
    }
    
    cout << "Total price of cars with power > 100 hp: " << totalPrice << endl;
    
    return 0;
}
