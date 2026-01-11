

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Student {
        string surname;
        int marks[10];
    } students[25]; // заполнить
    
    int maxSum = -1, minSum = 1e9;
    string maxStudent, minStudent;
    
    for (int i = 0; i < 25; i++) {
        int sum = 0;
        for (int j = 0; j < 10; j++) sum += students[i].marks[j];
        
        if (sum > maxSum) {
            maxSum = sum;
            maxStudent = students[i].surname;
        }
        if (sum < minSum) {
            minSum = sum;
            minStudent = students[i].surname;
        }
    }
    
    cout << "Max sum: " << maxStudent << endl;
    cout << "Min sum: " << minStudent << endl;
    
    return 0;
}
