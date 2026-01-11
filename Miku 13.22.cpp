

#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Institution {
        string name;
        string type; // "school", "college", "lyceum"
        int students;
    } institutions[15]; // заполнить
    
    int totalStudentsInSchools = 0;
    for (int i = 0; i < 15; i++) {
        if (institutions[i].type == "school") {
            totalStudentsInSchools += institutions[i].students;
        }
    }
    
    cout << "Total students in schools: " << totalStudentsInSchools << endl;
    
    return 0;
}
