#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "введіть число для обчислення" << endl;
    cin >> n;
    n += 5;
    cout << "n += " << n << endl;
    n *= 2;
    cout << "n *= " << n << endl;
    n--;
    cout << "n-- " << n << endl;
    n++;
    cout << "n++ " << n << endl;

    cout << "кінцева n = " << n << endl;
    

}
