

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    struct tm today;
    time_t now = time(0);
    localtime_s(&today, &now);
    
    struct Employee {
        string surname, name, patronymic, address;
        int month, year;
    } employees[20]; // заполнить
    
    for (int i = 0; i < 20; i++) {
        int yearsWorked = today.tm_year + 1900 - employees[i].year;
        if (today.tm_mon + 1 < employees[i].month) yearsWorked--;
        
        if (yearsWorked >= 3) {
            cout << employees[i].surname << " " << employees[i].name << " " 
                 << employees[i].patronymic << " " << employees[i].address << endl;
        }
    }
    
    return 0;
}
