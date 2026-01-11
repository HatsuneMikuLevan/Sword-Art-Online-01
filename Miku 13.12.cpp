

#include <iostream>
using namespace std;

int main() {
    struct Time {
        int hours;
        int minutes;
    } moments[25]; // заполнить
    
    int i, j;
    cout << "Enter two moment numbers (1-25): ";
    cin >> i >> j;
    i--; j--;
    
    int total1 = moments[i].hours * 60 + moments[i].minutes;
    int total2 = moments[j].hours * 60 + moments[j].minutes;
    
    if (total1 < total2) cout << "First moment is earlier." << endl;
    else if (total1 > total2) cout << "Second moment is earlier." << endl;
    else cout << "Moments are equal." << endl;
    
    return 0;
}
