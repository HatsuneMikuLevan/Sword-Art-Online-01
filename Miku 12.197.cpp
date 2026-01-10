

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string expr = "(a+(b-c)*d)";
    stack<int> st;
    bool correct = true;
    int firstExtraClose = -1;
    
    for (size_t i = 0; i < expr.length(); i++) {
        if (expr[i] == '(') {
            st.push(i);
        } else if (expr[i] == ')') {
            if (st.empty()) {
                correct = false;
                if (firstExtraClose == -1) firstExtraClose = i;
            } else {
                st.pop();
            }
        }
    }
    
    if (correct && st.empty()) {
        cout << "да" << endl;
    } else {
        cout << "нет" << endl;
        if (!st.empty()) {
            cout << "Лишних открывающих: " << st.size() << endl;
        }
        if (firstExtraClose != -1) {
            cout << "Первая лишняя закрывающая на позиции: " << firstExtraClose << endl;
        }
    }
    
    return 0;
}
