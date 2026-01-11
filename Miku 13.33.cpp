

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Student {
        string surname;
        int marks[4];
    } students[22]; // заполнить
    
    int maxSum = -1;
    string maxStudent;
    
    for (int i = 0; i < 22; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) sum += students[i].marks[j];
        
        if (sum > maxSum) {
            maxSum = sum;
            maxStudent = students[i].surname;
        }
    }
    
    cout << "Student with max sum: " << maxStudent << endl;
    
    return 0;
}
