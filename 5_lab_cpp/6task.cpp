#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    if (m < 2 || m == 12) {
        cout << "зима" << endl;
    } else if (m >= 3 && m <= 5) {
        cout << "весна" << endl;
    } else if (m >= 6 && m <= 8) {
        cout << "ілто" << endl;
    } else if (m >= 9 && m <= 11) {
        cout << "осінь " << endl;
    } else {
        cout << "погане" <<  endl ;
    }

    return 0;
}

