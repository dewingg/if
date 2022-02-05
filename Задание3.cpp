#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;

    cout << "Ведите число А: ";
    cin >> a;
    cout << "Ведите число B:";
    cin >> b;
    cout << "Ведите число С:";
    cin >> c;
    if (a > b) {
        cout << "a больше чем b";

    }
    if (a = c) {
        cout << "B равняется C";
    }
    if (a < c) {
        cout << "Б больше чем С";
    }
    else {
        if (a > c) {
            cout << "b больше чем с";

        }

    if (b = c) {
        cout << "B равняется C";
    }
    if (b < c) {
        cout << "Б больше чем С";
    }
    else {
        if (b > c) {
            cout << "b больше чем с";
        
        }
    
    }
    else {
        if (a < b) {
            cout << "a меньше чем b";
        }
        else { cout << "А ровно б"; }
    }
};
    }



   
    system("pause");
    return 0;
}
