#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

// ============================== 9.1 ==============================
void task9_1() {
    cout << "9.1а) Таблица из 8:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "8 ";
        }
        cout << "\n";
    }

    cout << "\n9.1б) Таблица от 1 до 3:\n";
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << i << " ";
        }
        cout << "\n";
    }

    cout << "\n9.1в) Таблица 10, 20, 30:\n";
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << i * 10 << " ";
        }
        cout << "\n";
    }
}

// ============================== 9.2 ==============================
void task9_2() {
    cout << "9.2а) Таблица сложения (по строкам):\n";
    for (int b = 1; b <= 9; b++) {
        for (int a = 1; a <= 9; a++) {
            cout << a << " + " << b << " = " << a + b << "\t";
        }
        cout << "\n";
    }

    cout << "\n9.2б) Таблица сложения (по столбцам):\n";
    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; b++) {
            cout << a << " + " << b << " = " << a + b << "\t";
        }
        cout << "\n";
    }
}

// ============================== 9.3 ==============================
void task9_3() {
    cout << "9.3а) Таблица умножения (по строкам):\n";
    for (int b = 1; b <= 9; b++) {
        for (int a = 1; a <= 9; a++) {
            cout << a << " * " << b << " = " << a * b << "\t";
        }
        cout << "\n";
    }
}

// ============================== 9.4 ==============================
void task9_4() {
    cout << "9.4. Ввод оценок 12 учеников по 3 предметам\n";
    const int students = 12, subjects = 3;
    int grades[students][subjects];
    int sum = 0;

    // Вариант 1: по строкам
    cout << "Вариант 1 (по строкам):\n";
    for (int i = 0; i < students; i++) {
        cout << "Ученик " << i + 1 << ": ";
        for (int j = 0; j < subjects; j++) {
            cin >> grades[i][j];
            sum += grades[i][j];
        }
    }
    cout << "Сумма всех оценок: " << sum << "\n";

    // Вариант 2: по столбцам
    sum = 0;
    cout << "Вариант 2 (по столбцам):\n";
    for (int j = 0; j < subjects; j++) {
        cout << "Предмет " << j + 1 << ": ";
        for (int i = 0; i < students; i++) {
            cin >> grades[i][j];
            sum += grades[i][j];
        }
    }
    cout << "Сумма всех оценок: " << sum << "\n";
}

// ============================== 9.18 ==============================
void task9_18() {
    cout << "9.18. Три группы по 20 человек, 3 экзамена\n";
    const int groups = 3, students = 20, exams = 3;
    double groupAvg[groups] = {0};

    for (int g = 0; g < groups; g++) {
        double sumGroup = 0;
        cout << "Группа " << g + 1 << ":\n";
        for (int s = 0; s < students; s++) {
            double sumStudent = 0;
            for (int e = 0; e < exams; e++) {
                int grade;
                cin >> grade;
                sumStudent += grade;
            }
            sumGroup += sumStudent / exams;
        }
        groupAvg[g] = sumGroup / students;
    }

    int bestGroup = 0;
    for (int g = 1; g < groups; g++) {
        if (groupAvg[g] > groupAvg[bestGroup]) {
            bestGroup = g;
        }
    }
    cout << "Лучшая группа: " << bestGroup + 1 
         << " (средний балл: " << groupAvg[bestGroup] << ")\n";
}

// ============================== 9.19 ==============================
void task9_19() {
    cout << "9.19. Количество делителей чисел от 120 до 140\n";
    for (int num = 120; num <= 140; num++) {
        int count = 0;
        for (int d = 1; d <= num; d++) {
            if (num % d == 0) count++;
        }
        cout << num << ": " << count << " делителей\n";
    }
}
// ============================== 9.20 ==============================
void task9_20() {
    cout << "9.20. Графическое изображение делимости\n";
    int n;
    cout << "Введите n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int count = 0;
        for (int d = 1; d <= i; d++) {
            if (i % d == 0) count++;
        }
        cout << i << " ";
        for (int j = 0; j < count; j++) cout << "+";
        cout << "\n";
    }
}

// ============================== 9.21 ==============================
void task9_21() {
    cout << "9.21. Числа от 1 до 300 с 5 делителями:\n";
    for (int num = 1; num <= 300; num++) {
        int count = 0;
        for (int d = 1; d <= num; d++) {
            if (num % d == 0) count++;
        }
        if (count == 5) cout << num << " ";
    }
    cout << "\n";
}

// ============================== 9.25 ==============================
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void task9_25() {
    cout << "9.25. Трехзначные простые числа:\n";
    for (int num = 100; num <= 999; num++) {
        if (isPrime(num)) cout << num << " ";
    }
    cout << "\n";
}

// ============================== 9.26 ==============================
void task9_26() {
    cout << "9.26. Первые 100 простых чисел:\n";
    int count = 0, num = 2;
    while (count < 100) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
            if (count % 10 == 0) cout << "\n";
        }
        num++;
    }
}

// ============================== 9.30 ==============================
void task9_30() {
    cout << "9.30. Трехзначное совершенное число:\n";
    for (int num = 100; num <= 999; num++) {
        int sum = 0;
        for (int d = 1; d < num; d++) {
            if (num % d == 0) sum += d;
        }
        if (sum == num) cout << num << " ";
    }
    cout << "\n";
}

// ============================== 9.40 ==============================
void task9_40() {
    cout << "9.40. Вычисление 1^1 + 2^2 + ... + n^n\n";
    int n;
    cout << "Введите n: ";
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        long long power = 1;
        for (int j = 0; j < i; j++) power *= i;
        sum += power;
    }
    cout << "Сумма: " << sum << "\n";
}

// ============================== 9.41 ==============================
void task9_41() {
    cout << "9.41. Трехзначные числа с суммой цифр = n (без операций деления)\n";
    int n;
    cout << "Введите n (≤27): ";
    cin >> n;
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                if (i + j + k == n) {
                    cout << i * 100 + j * 10 + k << " ";
                }
            }
        }
    }
    cout << "\n";
}

// ============================== 9.42 ==============================
void task9_42() {
    cout << "9.42. Трехзначные числа без одинаковых цифр (без операций деления):\n";
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j == i) continue;
            for (int k = 0; k <= 9; k++) {
                if (k == i || k == j) continue;
                cout << i * 100 + j * 10 + k << " ";
            }
        }
    }
    cout << "\n";
}

// ============================== 9.43 ==============================
int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void task9_43() {
    cout << "9.43. НОД n чисел\n";
    int n;
    cout << "Введите n: ";
    cin >> n;
    int result;
    cin >> result;
    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;
        result = gcd(result, num);
    }
    cout << "НОД: " << result << "\n";
}
// ============================== 9.46 ==============================
void task9_46() {
    cout << "9.46. Цифровой корень\n";
    long long num;
    cout << "Введите натуральное число: ";
    cin >> num;
    
    while (num >= 10) {
        long long sum = 0;
        long long temp = num;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        num = sum;
    }
    cout << "Цифровой корень: " << num << "\n";
}

// ============================== 9.47 ==============================
void task9_47() {
    cout << "9.47. Задача о быках, коровах и телятах\n";
    // бык - 10 руб, корова - 5 руб, теленок - 0.5 руб
    // всего 100 руб и 100 голов
    cout << "Решение:\n";
    for (int bulls = 0; bulls <= 10; bulls++) {
        for (int cows = 0; cows <= 20; cows++) {
            int calves = 100 - bulls - cows;
            if (calves < 0) continue;
            if (bulls * 10 + cows * 5 + calves * 0.5 == 100) {
                cout << "Быков: " << bulls 
                     << ", Коров: " << cows 
                     << ", Телят: " << calves << "\n";
            }
        }
    }
}

// ============================== 9.48 ==============================
void task9_48_variant1(int n) {
    cout << "Простое разложение (вариант 1): ";
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            cout << i << " ";
            while (n % i == 0) n /= i;
        }
    }
    cout << "\n";
}

void task9_48_variant2(int n) {
    cout << "Простое разложение (вариант 2): ";
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            cout << i << "^" << count << " ";
        }
    }
    cout << "\n";
}

void task9_48() {
    cout << "9.48. Разложение на простые множители\n";
    int n;
    cout << "Введите n: ";
    cin >> n;
    task9_48_variant1(n);
    task9_48_variant2(n);
}

// ============================== 9.50 ==============================
void task9_50() {
    cout << "9.50. Числа, взаимно простые с n\n";
    int n;
    cout << "Введите n: ";
    cin >> n;
    cout << "Числа < " << n << ", взаимно простые с " << n << ": ";
    for (int i = 1; i < n; i++) {
        if (gcd(i, n) == 1) {
            cout << i << " ";
        }
    }
    cout << "\n";
}

// ============================== 9.51 ==============================
void task9_51() {
    cout << "9.51. Числа < n, взаимно простые с p\n";
    int n, p;
    cout << "Введите n и p: ";
    cin >> n >> p;
    cout << "Числа < " << n << ", взаимно простые с " << p << ": ";
    for (int i = 1; i < n; i++) {
        if (gcd(i, p) == 1) {
            cout << i << " ";
        }
    }
    cout << "\n";
}

// ============================== 9.53 (из первой версии) ==============================
void task9_53() {
    cout << "9.53. Наименьшее число, представимое двумя способами как сумма кубов\n";
    const int LIMIT = 10000; // ограничиваем поиск
    for (int n = 1; n < LIMIT; n++) {
        int ways = 0;
        for (int a = 1; a * a * a < n; a++) {
            int a3 = a * a * a;
            for (int b = a + 1; a3 + b * b * b <= n; b++) {
                if (a3 + b * b * b == n) {
                    ways++;
                    if (ways >= 2) {
                        cout << "Найдено: " << n << "\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "Не найдено в пределах " << LIMIT << "\n";
}

// ============================== 9.54 ==============================
void task9_54() {
    cout << "9.54. Простые несократимые дроби между 0 и 1, знаменатель ≤ 7\n";
    set<pair<int, int>> fractions;
    for (int denom = 2; denom <= 7; denom++) {
for (int num = 1; num < denom; num++) {
            if (gcd(num, denom) == 1) {
                fractions.insert({num, denom});
            }
        }
    }
    cout << "Дроби: ";
    for (auto f : fractions) {
        cout << f.first << "/" << f.second << " ";
    }
    cout << "\n";
}

// ============================== MAIN ==============================
int main() {
    task9_1();
    cout << "\n";
    
    task9_2();
    cout << "\n";
    
    task9_3();
    cout << "\n";
    
    // task9_4(); // требует ввода данных
    cout << "\n";
    
    task9_18();
    cout << "\n";
    
    task9_19();
    cout << "\n";
    
    task9_20();
    cout << "\n";
    
    task9_21();
    cout << "\n";
    
    task9_25();
    cout << "\n";
    
    task9_26();
    cout << "\n";
    
    task9_30();
    cout << "\n";
    
    task9_40();
    cout << "\n";
    
    task9_41();
    cout << "\n";
    
    task9_42();
    cout << "\n";
    
    task9_43();
    cout << "\n";
    
    task9_46();
    cout << "\n";
    
    task9_47();
    cout << "\n";
    
    task9_48();
    cout << "\n";
    
    task9_50();
    cout << "\n";
    
    task9_51();
    cout << "\n";
    
    task9_53();
    cout << "\n";
    
    task9_54();
    
    return 0;
}
// ============================== 9.52 ВАРИАНТ 1 ==============================
void task9_52_variant1() {
    cout << "9.52 (вариант 1). Делители q, взаимно простые с p\n";
    int p, q;
    cout << "Введите p и q: ";
    cin >> p >> q;
    
    cout << "Делители " << q << ", взаимно простые с " << p << ": ";
    for (int d = 1; d <= q; d++) {
        if (q % d == 0 && gcd(d, p) == 1) {
            cout << d << " ";
        }
    }
    cout << "\n";
}

// ============================== 9.52 ВАРИАНТ 2 ==============================
void task9_52_variant2() {
    cout << "9.52 (вариант 2). Числа < p, взаимно простые с q\n";
    int p, q, r, s;
    cout << "Введите p, q, r, s: ";
    cin >> p >> q >> r >> s;
    
    // Поскольку в условии не сказано, как использовать r и s,
    // а задача дублирует 9.51, просто реализую как 9.51
    cout << "Числа < " << p << ", взаимно простые с " << q << ": ";
    for (int i = 1; i < p; i++) {
        if (gcd(i, q) == 1) {
            cout << i << " ";
        }
    }
    cout << "\n";
}

// ============================== MAIN (дополненный) ==============================
int main() {
    // ... предыдущие вызовы задач ...
    
    cout << "\n=== Задача 9.52 ===\n";
    task9_52_variant1();
    task9_52_variant2();
    
    // ... остальные задачи ...
    
    return 0;
}
