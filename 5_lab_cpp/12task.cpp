#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int sum = 0;
    int num = x;
    while (num != 0) {
        sum += num % 10;  
        num /= 10;       
    }

    cout << sum;

    return 0;
}

