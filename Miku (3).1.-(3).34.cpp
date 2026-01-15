#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // ПЗ.1
    bool A = true, B = false, C = false;
    cout << "ПЗ.1:" << endl;
    cout << "a) A  B = " << (A  B) << endl; // 1
    cout << "б) A && B = " << (A && B) << endl; // 0
    cout << "в) B  C = " << (B  C) << endl; // 0

    // ПЗ.2
    bool X = false, Y = true, Z = false;
    cout << "\nПЗ.2:" << endl;
    cout << "a) X  Z = " << (X  Z) << endl; // 0
    cout << "б) X && Y = " << (X && Y) << endl; // 0
    cout << "в) X && Z = " << (X && Z) << endl; // 0

    // ПЗ.3
    cout << "\nПЗ.3:" << endl;
    cout << "a) !A && B = " << (!A && B) << endl; // 0
    cout << "б) A  !B = " << (A  !B) << endl; // 1
    cout << "в) A && B  C = " << (A && B  C) << endl; // 0

    // ПЗ.4
    X = true; Y = true; Z = false;
    cout << "\nПЗ.4:" << endl;
    cout << "a) !X && Y = " << (!X && Y) << endl; // 0
    cout << "б) X  !Y = " << (X  !Y) << endl; // 1
    cout << "в) X  Y && Z = " << (X  Y && Z) << endl; // 1

    // ПЗ.5
    A = true; B = false; C = false;
    cout << "\nПЗ.5:" << endl;
    cout << "a) A  B && !C = " << (A  B && !C) << endl; // 1
    cout << "г) A && !B  C = " << (A && !B  C) << endl; // 1
    cout << "д) A && !B  C = " << (A && !B  C) << endl; // 1
    cout << "е) A  (!B  C) = " << (A  (!B  C)) << endl; // 1

    // ПЗ.6
    X = false; Y = false; Z = true;
    cout << "\nПЗ.6:" << endl;
    cout << "a) X  Y && !Z = " << (X  Y && !Z) << endl; // 0
    cout << "б) !X && !Y = " << (!X && !Y) << endl; // 1
    cout << "в) !X && Z  Y = " << (!X && Z  Y) << endl; // 1
    cout << "г) X && !Y  Z = " << (X && !Y  Z) << endl; // 1
    cout << "д) X && !Y  Z = " << (X && !Y  Z) << endl; // 1
    cout << "е) X  (!Y  Z) = " << (X  (!Y  Z)) << endl; // 1

    // ПЗ.7
    A = true; B = false; C = false;
    cout << "\nПЗ.7:" << endl;
    cout << "a) A  !A && B  C = " << (A  !A && B  C) << endl; // 1
    cout << "б) !A  A && B  C = " << (!A  A && B  C) << endl; // 0
    cout << "в) A  B && !C = " << (A  B && !C) << endl; // 1
    cout << "г) A  B  C = " << (A  B  C) << endl; // 1

    // ПЗ.8
    X = false; Y = true; Z = false;
    cout << "\nПЗ.8:" << endl;
    cout << "a) X && !Z  Y  !Z = " << (X && !Z  Y  !Z) << endl; // 1
    cout << "б) !X && !Y && Z = " << (!X && !Y && Z) << endl; // 0
    cout << "в) X && Y  X && Z  !Z = " << (X && Y  X && Z  !Z) << endl; // 1

    // ПЗ.9
    X = true; Y = false; Z = false;
    cout << "\nПЗ.9:" << endl;
    cout << "a) !X  !Y  !Z = " << (!X  !Y  !Z) << endl; // 1
    cout << "б) (!X  !Y) && (X  Y) = " << ((!X  !Y) && (X  Y)) << endl; // 1
    cout << "в) X && Y  X && Z  !Z = " << (X && Y  X && Z  !Z) << endl; // 1

    // ПЗ.10
    A = false; B = false; C = true;
    cout << "\nПЗ.10:" << endl;
    cout << "a) (!A  !B) && !C = " << ((!A  !B) && !C) << endl; // 0
    cout << "б) (!A  !B) && (A  B) = " << ((!A  !B) && (A  B)) << endl; // 0
    cout << "в) A && B  A && C  !C = " << (A && B  A && C  !C) << endl; // 0

    // ПЗ.11
    int x = 1, y = -1;
    cout << "\nПЗ.11:" << endl;
    cout << "a) x^2 + y^2 <= 4: " << (x*x + y*y <= 4) << endl; // 1
    x = 1; y = 2;
    cout << "б) x > 0  y*y != 4: " << (x > 0  y*y != 4) << endl; // 1
    cout << "в) x > 0 && y*y != 4: " << (x > 0 && y*y != 4) << endl; // 0
    x = 2; y = 1;
    cout << "г) x*y != 0  y < x: " << (x*y != 0  y < x) << endl; // 1
    cout << "д) x*y != 0  y < x: " << (x*y != 0  y < x) << endl; // 1
    x = 1; y = 2;
    cout << "е) x*y < 0  y > x: " << (x*y < 0  y > x) << endl; // 1

    // ПЗ.12
    x = 1; y = -1;
    cout << "\nПЗ.12:" << endl;
    cout << "a) x^2 - y^2 <= 0: " << (x*x - y*y <= 0) << endl; // 1
x = 2; y = -2;
    cout << "б) x > 2  y*y != 4: " << (x > 2  y*y != 4) << endl; // 0
    cout << "в) x > 0 && y*y != 4: " << (x > 0 && y*y != 4) << endl; // 0
    x = 1; y = 2;
    cout << "г) x*y != 4 && y > x: " << (x*y != 4 && y > x) << endl; // 1
    cout << "д) x*y != 0  y > x: " << (x*y != 0  y > x) << endl; // 1
    cout << "е) x*y < 0  y > x: " << (x*y < 0  y > x) << endl; // 1

    // ПЗ.13
    cout << "\nПЗ.13 (все возможные значения):" << endl;
    for (int i = 0; i < 4; i++) {
        A = i / 2; B = i % 2;
        cout << "A=" << A << ", B=" << B << ": ";
        cout << "a) " << !(A && B) << ", ";
        cout << "б) " << (!A || B) << ", ";
        cout << "в) " << (A || !B) << endl;
    }

    // ПЗ.14
    cout << "\nПЗ.14 (все возможные значения):" << endl;
    for (int i = 0; i < 4; i++) {
        X = i / 2; Y = i % 2;
        cout << "X=" << X << ", Y=" << Y << ": ";
        cout << "a) " << !(X || Y) << ", ";
        cout << "б) " << (!X && Y) << ", ";
        cout << "в) " << (X && !Y) << endl;
    }

    // ПЗ.15
    cout << "\nПЗ.15 (все возможные значения):" << endl;
    for (int i = 0; i < 4; i++) {
        A = i / 2; B = i % 2;
        cout << "A=" << A << ", B=" << B << ": ";
        cout << "a) " << (!A || !B) << ", ";
        cout << "б) " << (A && (A || !B)) << ", ";
        cout << "в) " << ((!A || B) && B) << endl;
    }

    // ПЗ.16
    cout << "\nПЗ.16 (все возможные значения):" << endl;
    for (int i = 0; i < 4; i++) {
        X = i / 2; Y = i % 2;
        cout << "X=" << X << ", Y=" << Y << ": ";
        cout << "a) " << (!X && !Y) << ", ";
        cout << "б) " << (X || (!X && Y)) << ", ";
        cout << "в) " << ((!X && Y) || Y) << endl;
    }

    // ПЗ.17
    cout << "\nПЗ.17 (все возможные значения):" << endl;
    for (int i = 0; i < 4; i++) {
        A = i / 2; B = i % 2;
        cout << "A=" << A << ", B=" << B << ": ";
        cout << "a) " << (!A && !B || A) << ", ";
        cout << "б) " << (B || !A && !B) << ", ";
        cout << "в) " << (B && !A || B) << endl;
    }

    // ПЗ.27 - запись логических выражений
    cout << "\nПЗ.27:" << endl;
    cout << "a) x > 2 && y > 3" << endl;
    cout << "б) x > 1 || y > -2" << endl;
    cout << "в) x > 0 && y < 5" << endl;
    cout << "г) x > 3 || x < -1" << endl;
    cout << "д) x > 3 && x < 10" << endl;

    // ПЗ.28
    int A_val, B_val, C_val;
    cout << "\nПЗ.28:" << endl;
    cout << "a) A > 100 && B > 100" << endl;
    cout << "б) (A % 2 == 0) ^ (B % 2 == 0)" << endl; // XOR
    cout << "в) A > 0 || B > 0" << endl;
    cout << "г) A % 3 == 0 && B % 3 == 0 && C % 3 == 0" << endl;
    cout << "д) (A < 50) + (B < 50) + (C < 50) == 1" << endl;
    cout << "е) A < 0  B < 0  C < 0" << endl;

    // ПЗ.29
    int X_val, Y_val, Z_val;
    cout << "\nПЗ.29:" << endl;
    cout << "a) X % 2 != 0 && Y % 2 != 0" << endl;
    cout << "б) (X < 20) ^ (Y < 20)" << endl;
    cout << "в) X == 0 || Y == 0" << endl;
    cout << "г) X < 0 && Y < 0 && Z < 0" << endl;
    cout << "д) (X % 5 == 0) + (Y % 5 == 0) + (Z % 5 == 0) == 1" << endl;
    cout << "е) X > 100  Y > 100  Z > 100" << endl;

    // ПЗ.30
    cout << "\nПЗ.30:" << endl;
    cout << "a) A % 2 == 0 || A % 3 == 0" << endl;
    cout << "б) A % 3 != 0 && A % 10 == 0" << endl;

    // ПЗ.31
    cout << "\nПЗ.31:" << endl;
    cout << "a) N % 5 == 0 || N % 7 == 0" << endl;
    cout << "б) N % 4 == 0 && N % 10 != 0" << endl;

    // ПЗ.32 и ПЗ.33 - условия для точек
    double x_coord, y_coord;
    cout << "\nПЗ.32/33 (примеры условий для областей):" << endl;
    cout << "Для прямоугольника [-2,0] x [0,1]: (x >= -2 && x <= 0 && y >= 0 && y <= 1)" << endl;
    cout << "Для треугольника: (x >= 0 && y >= 0 && x + y <= 1)" << endl;
    cout << "Для круга радиусом 2: (x*x + y*y <= 4)" << endl;
// ПЗ.34 - шахматы
    int a = 1, b = 1, c = 1, d = 1; // пример координат
    cout << "\nПЗ.34:" << endl;
    cout << "a) Ладья: (a == c) || (b == d)" << endl;
    cout << "б) Слон: abs(a - c) == abs(b - d)" << endl;
    cout << "в) Король: abs(a - c) <= 1 && abs(b - d) <= 1" << endl;
    cout << "г) Ферзь: (a == c)  (b == d)  (abs(a - c) == abs(b - d))" << endl;
    cout << "д) Белая пешка: обычный ход: (c == a && d == b+1) || (b == 2 && d == 4 && c == a)" << endl;
    cout << "   Белая пешка взятие: abs(c - a) == 1 && d == b+1" << endl;
    cout << "е) Черная пешка: обычный ход: (c == a && d == b-1) || (b == 7 && d == 5 && c == a)" << endl;
    cout << "   Черная пешка взятие: abs(c - a) == 1 && d == b-1" << endl;
    cout << "ж) Конь: (abs(a - c) == 1 && abs(b - d) == 2) || (abs(a - c) == 2 && abs(b - d) == 1)" << endl;

    return 0;
}
