

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Item {
        string material;
        double mass;
        double volume;
    } items[30]; // заполнить
    
    double minDensity = 1e9;
    string minMaterial;
    for (int i = 0; i < 30; i++) {
        double density = items[i].mass / items[i].volume;
        if (density < minDensity) {
            minDensity = density;
            minMaterial = items[i].material;
        }
    }
    
    cout << "Material with min density: " << minMaterial << " (" << minDensity << ")" << endl;
    
    return 0;
}
