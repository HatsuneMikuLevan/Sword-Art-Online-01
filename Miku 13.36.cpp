

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Student {
        string surname;
        double height;
    } students[25]; // заполнить
    
    // a)
    double maxHeight = -1, minHeight = 1e9;
    string tallest, shortest;
    for (int i = 0; i < 25; i++) {
        if (students[i].height > maxHeight) {
            maxHeight = students[i].height;
            tallest = students[i].surname;
        }
        if (students[i].height < minHeight) {
            minHeight = students[i].height;
            shortest = students[i].surname;
        }
    }
    cout << "Tallest: " << tallest << ", Shortest: " << shortest << endl;
    
    // б)
    double secondMax = -1;
    string secondTallest;
    for (int i = 0; i < 25; i++) {
        if (students[i].height > secondMax && students[i].surname != tallest) {
            secondMax = students[i].height;
            secondTallest = students[i].surname;
        }
    }
    cout << "Second tallest: " << secondTallest << endl;
    
    return 0;
}
