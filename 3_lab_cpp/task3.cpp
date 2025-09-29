#include <iostream>
using namespace std;


int main(){
    int a = 2;
    int b = 5;
    int c = 3;

    int x = (a<b ? ((a<c)? a:c) : ((b<c)? a:c));
    cout << x << endl;

}
