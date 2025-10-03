#include <iostream>
using namespace std;

int main() {
    int mark;
    cin >> mark;

    if (mark >= 90) {
        cout << "A";
    } else if (mark >= 75) {
        cout << "B";
    } else if (mark >= 60) {
        cout << "C";
    } else {
        cout << "F";
    }

    return 0;
}

