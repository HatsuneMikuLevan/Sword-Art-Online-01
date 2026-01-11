

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Item {
        string material;
        double mass;
        double volume;
    } items[30]; // заполнить
    
    double maxDensity = 0;
    for (int i = 0; i < 30; i++) {
        double density = items[i].mass / items[i].volume;
        if (density > maxDensity) {
            maxDensity = density;
        }
    }
    
    cout << "Max density: " << maxDensity << endl;
    
    return 0;
}
