

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Product {
        string name;
        int rubles;
        int kopecks;
    } products[20]; // заполнить
    
    int i, j;
    cout << "Enter product numbers to compare (1-20): ";
    cin >> i >> j;
    i--; j--;
    
    int total1 = products[i].rubles * 100 + products[i].kopecks;
    int total2 = products[j].rubles * 100 + products[j].kopecks;
    
    if (total1 > total2) cout << products[i].name << " is more expensive." << endl;
    else if (total1 < total2) cout << products[j].name << " is more expensive." << endl;
    else cout << "Prices are equal." << endl;
    
    return 0;
}
