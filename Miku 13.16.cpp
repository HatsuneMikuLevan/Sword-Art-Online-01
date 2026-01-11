

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    struct tm today;
    time_t now = time(0);
    localtime_s(&today, &now);
    
    struct Student {
        string surname, name, patronymic;
        int year, month, day;
    } students[20]; // заполнить
    
    bool found = false;
    for (int i = 0; i < 20; i++) {
        if (students[i].month == today.tm_mon + 1 && students[i].day == today.tm_mday) {
            cout << students[i].name << " " << students[i].surname << endl;
            found = true;
        }
    }
    
    if (!found) cout << "No birthdays today." << endl;
    
    return 0;
}
