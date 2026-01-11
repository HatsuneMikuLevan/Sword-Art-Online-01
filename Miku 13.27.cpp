

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Student {
        string surname;
        int marks[12];
    } students[20]; // заполнить
    
    double classTotal = 0;
    int classMarkCount = 0;
    
    for (int i = 0; i < 20; i++) {
        double sum = 0;
        for (int j = 0; j < 12; j++) {
            sum += students[i].marks[j];
        }
        double average = sum / 12;
        classTotal += sum;
        classMarkCount += 12;
        
        cout << students[i].surname << ": " << average << endl;
    }
    
    double classAverage = classTotal / classMarkCount;
    cout << "Class average: " << classAverage << endl;
    
    cout << "Students above class average:" << endl;
    for (int i = 0; i < 20; i++) {
        double sum = 0;
        for (int j = 0; j < 12; j++) sum += students[i].marks[j];
        double average = sum / 12;
        if (average > classAverage) {
            cout << students[i].surname << endl;
        }
    }
    
    return 0;
}
