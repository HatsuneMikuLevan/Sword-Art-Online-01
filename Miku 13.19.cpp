

#include <iostream>
using namespace std;

int main() {
    int days = 30; // например
    double precipitation[30]; // заполнить
    double temperature[30]; // заполнить
    
    double rain = 0, snow = 0;
    for (int i = 0; i < days; i++) {
        if (temperature[i] > 0) rain += precipitation[i];
        else snow += precipitation[i];
    }
    
    cout << "Rain: " << rain << ", Snow: " << snow << endl;
    
    return 0;
}
