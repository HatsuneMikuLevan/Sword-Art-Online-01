

#include <iostream>
using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: return isLeap(year) ? 29 : 28;
        default: return 0;
    }
}

void nextDay(int &d, int &m, int &y) {
    d++;
    if (d > daysInMonth(m, y)) {
        d = 1;
        m++;
        if (m > 12) {
            m = 1;
            y++;
        }
    }
}

void prevDay(int &d, int &m, int &y) {
    d--;
    if (d < 1) {
        m--;
        if (m < 1) {
            m = 12;
            y--;
        }
        d = daysInMonth(m, y);
    }
}

int main() {
    int d, m, y;
    cout << "Введите день, месяц, год: ";
    cin >> d >> m >> y;
    int d1 = d, m1 = m, y1 = y;
    nextDay(d, m, y);
    cout << "Следующий день: " << d << "." << m << "." << y << endl;
    prevDay(d1, m1, y1);
    cout << "Предыдущий день: " << d1 << "." << m1 << "." << y1 << endl;
    return 0;
}
