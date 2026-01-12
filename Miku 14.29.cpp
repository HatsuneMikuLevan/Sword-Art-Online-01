

#include <iostream>
using namespace std;

bool isInArray(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) return true;
    }
    return false;
}

int main() {
    int m1[] = {1, 2, 3, 4, 5};
    int m2[] = {6, 7, 8, 9, 10};
    int m3[] = {2, 4, 6, 8, 10};
    int size = 5;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < size; i++) {
        if (isInArray(m3, size, m1[i])) count1++;
        if (isInArray(m3, size, m2[i])) count2++;
    }
    if (count1 > count2) cout << "В m1 больше чисел из m3" << endl;
    else if (count1 < count2) cout << "В m2 больше чисел из m3" << endl;
    else cout << "Количество одинаково" << endl;
    return 0;
}
