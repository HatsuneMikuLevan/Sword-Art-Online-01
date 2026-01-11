

#include <iostream>
using namespace std;

int main() {
    struct Magazine {
        string name;
        double price;
        int circulation;
    } magazines[15]; // заполнить
    
    double totalPrice = 0;
    int count = 0;
    for (int i = 0; i < 15; i++) {
        if (magazines[i].circulation < 10000) {
            totalPrice += magazines[i].price;
            count++;
        }
    }
    
    double average = (count > 0) ? totalPrice / count : 0;
    cout << "Average price of magazines with circulation < 10000: " << average << endl;
    
    return 0;
}
