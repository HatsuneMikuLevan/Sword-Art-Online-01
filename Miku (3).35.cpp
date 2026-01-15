#include <iostream>
#include <cmath>
using namespace std;

// Функции проверки угроз для разных фигур
bool rookThreatens(int a, int b, int c, int d) {
    // Ладья угрожает, если на одной вертикали или горизонтали
    return (a == c) || (b == d);
}

bool bishopThreatens(int a, int b, int c, int d) {
    // Слон угрожает, если на одной диагонали
    return abs(a - c) == abs(b - d);
}

bool knightThreatens(int a, int b, int c, int d) {
    // Конь угрожает при ходе буквой "Г"
    return (abs(a - c) == 1 && abs(b - d) == 2) || 
           (abs(a - c) == 2 && abs(b - d) == 1);
}

bool queenThreatens(int a, int b, int c, int d) {
    // Ферзь угрожает как ладья или слон
    return rookThreatens(a, b, c, d) || bishopThreatens(a, b, c, d);
}

bool kingThreatens(int a, int b, int c, int d) {
    // Король угрожает на соседних полях
    return abs(a - c) <= 1 && abs(b - d) <= 1;
}

// Функция проверки, может ли фигура пойти на поле
bool canMoveTo(int whiteType, int a, int b, int e, int f) {
    // Проверяем, что поле в пределах доски
    if (e < 1  e > 8  f < 1 || f > 8) return false;
    // Нельзя остаться на месте
    if (a == e && b == f) return false;
    
    switch(whiteType) {
        case 1: // Ладья
            return (a == e) || (b == f);
        case 2: // Слон
            return abs(a - e) == abs(b - f);
        case 3: // Ферзь
            return (a == e)  (b == f)  (abs(a - e) == abs(b - f));
        case 4: // Конь
            return (abs(a - e) == 1 && abs(b - f) == 2) || 
                   (abs(a - e) == 2 && abs(b - f) == 1);
        case 5: // Король
            return abs(a - e) <= 1 && abs(b - f) <= 1;
        default:
            return false;
    }
}

// Функция проверки условия для П3.35
bool checkCondition(int whiteType, int blackType, int a, int b, int c, int d, int e, int f) {
    // 1. Белая фигура может пойти на поле (e,f)
    if (!canMoveTo(whiteType, a, b, e, f)) {
        return false;
    }
    
    // 2. Черная фигура не угрожает полю (e,f)
    bool blackThreatens = false;
    switch(blackType) {
        case 1: // Ладья
            blackThreatens = rookThreatens(c, d, e, f);
            break;
        case 2: // Слон
            blackThreatens = bishopThreatens(c, d, e, f);
            break;
        case 3: // Ферзь
            blackThreatens = queenThreatens(c, d, e, f);
            break;
        case 4: // Конь
            blackThreatens = knightThreatens(c, d, e, f);
            break;
        case 5: // Король
            blackThreatens = kingThreatens(c, d, e, f);
            break;
    }
    
    return !blackThreatens;
}

int main() {
    int a, b, c, d, e, f;
    
    // Пример ввода координат
    a = 1; b = 1; // Белая фигура на a1
    c = 8; d = 8; // Черная фигура на h8
    e = 1; f = 8; // Целевое поле a8
    
    cout << "П3.35: Проверка условий для разных комбинаций фигур" << endl;
    cout << "Белая фигура на: (" << a << "," << b << ")" << endl;
    cout << "Черная фигура на: (" << c << "," << d << ")" << endl;
    cout << "Целевое поле: (" << e << "," << f << ")" << endl << endl;
    
    // Все комбинации из задачи
    cout << "a) Ладья и ладья: " 
         << checkCondition(1, 1, a, b, c, d, e, f) << endl;
    
    cout << "б) Ладья и ферзь: " 
         << checkCondition(1, 3, a, b, c, d, e, f) << endl;
    
    cout << "в) Ладья и конь: " 
         << checkCondition(1, 4, a, b, c, d, e, f) << endl;
    
    cout << "г) Ладья и слон: " 
         << checkCondition(1, 2, a, b, c, d, e, f) << endl;
    
    cout << "д) Ферзь и ферзь: " 
         << checkCondition(3, 3, a, b, c, d, e, f) << endl;
    
    cout << "е) Ферзь и ладья: " 
         << checkCondition(3, 1, a, b, c, d, e, f) << endl;
    
    cout << "ж) Ферзь и конь: " 
         << checkCondition(3, 4, a, b, c, d, e, f) << endl;
cout << "з) Ферзь и слон: " 
         << checkCondition(3, 2, a, b, c, d, e, f) << endl;
    
    cout << "и) Конь и конь: " 
         << checkCondition(4, 4, a, b, c, d, e, f) << endl;
    
    cout << "к) Конь и ладья: " 
         << checkCondition(4, 1, a, b, c, d, e, f) << endl;
    
    cout << "л) Конь и ферзь: " 
         << checkCondition(4, 3, a, b, c, d, e, f) << endl;
    
    cout << "м) Конь и слон: " 
         << checkCondition(4, 2, a, b, c, d, e, f) << endl;
    
    cout << "н) Слон и слон: " 
         << checkCondition(2, 2, a, b, c, d, e, f) << endl;
    
    cout << "о) Слон и ферзь: " 
         << checkCondition(2, 3, a, b, c, d, e, f) << endl;
    
    cout << "п) Слон и конь: " 
         << checkCondition(2, 4, a, b, c, d, e, f) << endl;
    
    cout << "р) Слон и ладья: " 
         << checkCondition(2, 1, a, b, c, d, e, f) << endl;
    
    cout << "с) Король и слон: " 
         << checkCondition(5, 2, a, b, c, d, e, f) << endl;
    
    cout << "т) Король и ферзь: " 
         << checkCondition(5, 3, a, b, c, d, e, f) << endl;
    
    cout << "у) Король и конь: " 
         << checkCondition(5, 4, a, b, c, d, e, f) << endl;
    
    cout << "ф) Король и ладья: " 
         << checkCondition(5, 1, a, b, c, d, e, f) << endl;
    
    // Проверка с другими координатами для демонстрации
    cout << "\n--- Проверка с другими координатами ---" << endl;
    
    // Пример: белый слон на c1, черная ладья на h8, цель - f3
    a = 3; b = 1;
    c = 8; d = 8;
    e = 6; f = 3;
    
    cout << "Белый слон с " << a << b << " на " << e << f << endl;
    cout << "Черная ладья на " << c << d << endl;
    cout << "Слон может пойти? " << canMoveTo(2, a, b, e, f) << endl;
    cout << "Ладья угрожает? " << rookThreatens(c, d, e, f) << endl;
    cout << "Итог: " << checkCondition(2, 1, a, b, c, d, e, f) << endl;
    
    return 0;
}
