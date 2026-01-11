

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Event {
        int year, month, day;
    } events[20]; // заполнить
    
    int i, j;
    cout << "Enter two event numbers (1-20): ";
    cin >> i >> j;
    i--; j--;
    
    // Сравнение
    if (events[i].year > events[j].year ||
        (events[i].year == events[j].year && events[i].month > events[j].month) ||
        (events[i].year == events[j].year && events[i].month == events[j].month && events[i].day > events[j].day)) {
        cout << "First event is later." << endl;
    } else if (events[i].year < events[j].year ||
               (events[i].year == events[j].year && events[i].month < events[j].month) ||
               (events[i].year == events[j].year && events[i].month == events[j].month && events[i].day < events[j].day)) {
        cout << "Second event is later." << endl;
    } else {
        cout << "Events are on the same day." << endl;
    }
    
    return 0;
}
