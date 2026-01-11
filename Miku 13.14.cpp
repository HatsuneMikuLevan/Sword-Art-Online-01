

#include <iostream>
using namespace std;

int main() {
    struct Time {
        int hours, minutes, seconds;
    } moments[24]; // заполнить
    
    int i, j;
    cout << "Enter two moment numbers (1-24): ";
    cin >> i >> j;
    i--; j--;
    
    int total1 = moments[i].hours * 3600 + moments[i].minutes * 60 + moments[i].seconds;
    int total2 = moments[j].hours * 3600 + moments[j].minutes * 60 + moments[j].seconds;
    
    if (total1 < total2) cout << "First moment is earlier." << endl;
    else if (total1 > total2) cout << "Second moment is earlier." << endl;
    else cout << "Moments are equal." << endl;
    
    return 0;
}
