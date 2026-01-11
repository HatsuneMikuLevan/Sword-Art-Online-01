

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Country {
        string name;
        double population; // млн
        double area; // тыс. км²
    } countries[28]; // заполнить
    
    double minDensity = 1e9;
    string minCountry;
    for (int i = 0; i < 28; i++) {
        double density = countries[i].population / countries[i].area;
        if (density < minDensity) {
            minDensity = density;
            minCountry = countries[i].name;
        }
    }
    
    cout << "Country with min population density: " << minCountry << endl;
    
    return 0;
}
