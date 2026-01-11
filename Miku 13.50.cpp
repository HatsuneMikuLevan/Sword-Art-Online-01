

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 20;
    int table[20][20]; // заполнить (0 на диагонали, 3/1/0 вне)
    string teams[20]; // заполнить
    
    int points[20] = {0};
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                points[i] += table[i][j];
            }
        }
    }
    
    // Сортировка по очкам
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (points[i] < points[j]) {
                swap(points[i], points[j]);
                swap(teams[i], teams[j]);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << teams[i] << " (" << points[i] << ")" << endl;
    }
    
    return 0;
}
