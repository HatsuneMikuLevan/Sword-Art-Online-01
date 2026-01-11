

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Country {
        string name;
        double population; // млн
        double area; // тыс. км²
    } countries[28]; // заполнить
    
    double maxDensity = 0;
    for (int i = 0; i < 28; i++) {
        double density = countries[i].population / countries[i].area;
        if (density > maxDensity) {
            maxDensity = density;
        }
    }
    
    cout << "Max population density: " << maxDensity << " million per thousand km²" << endl;
    
    return 0;
}
