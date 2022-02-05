#include <iostream>
#include <windows.h>

using namespace std;

struct Person {
    char Country[20];
    char Successful[20];
    int  unsuccessful = 1;

};

void vivod(Person person, int number) {

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << "\nі";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf(" %1i ", number);

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << "і";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf(" %10s ", person.Country);

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << "і";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf(" %-20s ", person.Successful);

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << "і";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf(" %5i ", person.unsuccessful);

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << "і";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //cout << person.Name << " " << person.Surname << " " << person.Age << " лет\n";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Person str[6];

    for (int i = 0; i < 5; i++) {
        cout << "Персона " << i << ":\n";
        cin >> str[i].Country;
        cin >> str[i].Successful;
        cin >> str[i].unsuccessful;

    }

    for (int i = 0; i < 4; i++) {
        vivod(str[i], i);
    }
    
        ;
    return 0;
}