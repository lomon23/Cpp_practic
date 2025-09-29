#include <iostream>
using namespace std;

int main(){
    string name;
    double b,c;

    cout << "введи своє імя: ";
    cin >> name;

    cout << "введи перше число: ";
    cin >> b;
    
    cout << "Введи друге число: ";
    cin >> c;


    cout << "привіт " << name << endl;
    cout << "Сума: " << b + c << endl;
    cout << "Різниця: " << b - c << endl;
    cout << "Добуток: " << b * c << endl;
    cout << "Ділення: " << b / c << endl;
    cout << "P:" << b+b+c+c << endl;
    cout << "S:" << b*c << endl;
    return 0;
}
