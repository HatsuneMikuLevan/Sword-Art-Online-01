

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Train {
        int number;
        string destination;
        int arrivalHour, arrivalMinute;
        int departureHour, departureMinute;
    } trains[25]; // заполнить
    
    int currentHour, currentMinute;
    cout << "Enter current time (hh mm): ";
    cin >> currentHour >> currentMinute;
    
    int currentTime = currentHour * 60 + currentMinute;
    
    for (int i = 0; i < 25; i++) {
        int arrivalTime = trains[i].arrivalHour * 60 + trains[i].arrivalMinute;
        int departureTime = trains[i].departureHour * 60 + trains[i].departureMinute;
        
        if (currentTime >= arrivalTime && currentTime < departureTime) {
            cout << "Train " << trains[i].number << " to " << trains[i].destination << " is at station." << endl;
        }
    }
    
    return 0;
}
