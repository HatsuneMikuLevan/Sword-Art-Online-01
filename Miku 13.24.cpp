

#include <iostream>
using namespace std;

int main() {
    struct Car {
        string model;
        double price;
        int age;
    } cars[20]; // заполнить
    
    double totalPrice = 0;
    int count = 0;
    for (int i = 0; i < 20; i++) {
        if (cars[i].age > 6) {
            totalPrice += cars[i].price;
            count++;
        }
    }
    
    double average = (count > 0) ? totalPrice / count : 0;
    cout << "Average price of cars older than 6 years: " << average << endl;
    
    return 0;
}
