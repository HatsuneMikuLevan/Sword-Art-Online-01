

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Car {
        string model;
        double price;
        string type; // "легковой" или "грузовой"
    } cars[15]; // заполнить
    
    double totalPriceCars = 0;
    int countCars = 0;
    for (int i = 0; i < 15; i++) {
        if (cars[i].type == "легковой") {
            totalPriceCars += cars[i].price;
            countCars++;
        }
    }
    
    double averagePrice = (countCars > 0) ? totalPriceCars / countCars : 0;
    cout << "Average price of passenger cars: " << averagePrice << endl;
    
    return 0;
}
