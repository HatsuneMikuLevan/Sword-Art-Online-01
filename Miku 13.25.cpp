

#include <iostream>
using namespace std;

int main() {
    struct Person {
        double height;
        char gender; // 'M' или 'F'
    } people[22]; // заполнить
    
    double totalHeightMen = 0;
    int countMen = 0;
    for (int i = 0; i < 22; i++) {
        if (people[i].gender == 'M') {
            totalHeightMen += people[i].height;
            countMen++;
        }
    }
    
    double averageHeightMen = (countMen > 0) ? totalHeightMen / countMen : 0;
    cout << "Average height of men: " << averageHeightMen << endl;
    
    return 0;
}
