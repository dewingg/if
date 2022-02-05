#include <iostream>
#include <windows.h>


using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int p=0;
    int a;

    do 
    
    {
    cout << "Ведите число от 1-4, и ответьте нп вопрсо:";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "\n Столица России?";
        cout << "Москва";
        break;
    case 2:
        cout << "\nСтолица Украины? ";
        cout << " \n Киев";
        break;
    case 3:
        cout << "\n2+2?;
            cout << "\n 4";
        break;
    case 4:
        cout << "\n Столица англии?";
        cout << "\n Лондон";
        break;
    default:
        break;
    }
    cout << "\nЕсли хотите новый вопрос нажмите 1:";
    cin >> p;
} while (p == 1);
    





 


    return 0;
}