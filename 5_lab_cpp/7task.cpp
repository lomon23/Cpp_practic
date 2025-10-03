#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "not quadratic";
    } else {
        int D = b * b - 4 * a * c;

        if (D > 0) {
            cout << "two roots";
        } else if (D == 0) {
            cout << "one root";
        } else {
            cout << "no roots";
        }
    }

    return 0;
}

