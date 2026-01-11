

#include <iostream>
using namespace std;

int main() {
    struct Passenger {
        int items;
        double totalWeight;
    } passengers[24]; // заполнить
    
    // a)
    int countMoreThanTwo = 0;
    for (int i = 0; i < 24; i++) {
        if (passengers[i].items > 2) countMoreThanTwo++;
    }
    cout << "Passengers with >2 items: " << countMoreThanTwo << endl;
    
    // б)
    bool found = false;
    for (int i = 0; i < 24; i++) {
        if (passengers[i].items == 1 && passengers[i].totalWeight < 25) {
            found = true;
            break;
        }
    }
    cout << (found ? "There is a passenger with 1 item <25 kg." : "No such passenger.") << endl;
    
    // в)
    double totalItems = 0;
    for (int i = 0; i < 24; i++) totalItems += passengers[i].items;
    double averageItems = totalItems / 24;
    
    int countAboveAverage = 0;
    for (int i = 0; i < 24; i++) {
        if (passengers[i].items > averageItems) countAboveAverage++;
    }
    cout << "Passengers with items > average: " << countAboveAverage << endl;
    
    // г)
    double totalWeightAll = 0;
    double totalItemsAll = 0;
    for (int i = 0; i < 24; i++) {
        totalWeightAll += passengers[i].totalWeight;
        totalItemsAll += passengers[i].items;
    }
    double averageWeightPerItem = totalWeightAll / totalItemsAll;
    
    for (int i = 0; i < 24; i++) {
        double avgWeightThis = passengers[i].totalWeight / passengers[i].items;
        if (abs(avgWeightThis - averageWeightPerItem) <= 0.5) {
            cout << "Luggage " << i + 1 << " fits." << endl;
        }
    }
    
    return 0;
}
