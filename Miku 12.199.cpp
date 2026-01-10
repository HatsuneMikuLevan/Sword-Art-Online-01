

#include <iostream>
#include <string>
using namespace std;

string units[] = {"", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
string teens[] = {"десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};
string tens[] = {"", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто"};
string hundreds[] = {"", "сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "семьсот", "восемьсот", "девятьсот"};

string numberToWords(int n) {
    if (n == 1000) return "тысяча";
    
    string result;
    int h = n / 100;
    int t = (n / 10) % 10;
    int u = n % 10;
    
    if (h > 0) {
        result += hundreds[h] + " ";
    }
    
    if (t == 1) {
        result += teens[u] + " ";
    } else {
        if (t > 1) {
            result += tens[t] + " ";
        }
        if (u > 0) {
            result += units[u] + " ";
        }
    }
    
    // Убираем лишние пробелы
    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }
    
    return result;
}

int main() {
    int n = 241;
    cout << n << " -> " << numberToWords(n) << endl;
    return 0;
}
