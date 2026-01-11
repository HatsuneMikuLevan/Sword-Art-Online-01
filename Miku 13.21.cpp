

#include <iostream>
using namespace std;

int main() {
    struct Person {
        int age;
        char gender; // 'M' или 'F'
        double weight;
    } people[20]; // заполнить
    
    double totalWeightMen = 0;
    for (int i = 0; i < 20; i++) {
        if (people[i].gender == 'M') {
            totalWeightMen += people[i].weight;
        }
    }
    
    cout << "Total weight of men: " << totalWeightMen << endl;
    
    return 0;
}
