#include <iostream>
using namespace std;

int main() {
    int x, k;
    cin >> x >> k;

    bool isSet = (x & (1 << k)) != 0;
    cout << (isSet ? "true" : "false") << endl;

    return 0;
}

