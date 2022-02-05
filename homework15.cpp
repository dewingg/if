#include <iostream>
#include <Windows.h>
#include <cctype>
#include <stdio.h>
#include <string.h>



using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char ans[100];
    char str[100];
    char bud[] = "+-*/";

    do {
 
        system("cls");
        cout << "\n Ведите информацыю в строку:";
        gets_s(str);

    } while (strlen(str) < 1);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '1' or str[i] == '5')
            str[i] == '?';
    }
    strcat_s(str, ":Строка");
    cout << "Количество символов в строке:\n" << strlen(str);

    cout << endl << str;

    strcpy_s(ans, str);

    cout << "\n " << ans;

    int flag = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (iswdigit(str[i])) {
            flag = 1;

        }
    }
    if (flag == 1) {
        cout << "\n Числа есть встроке";
    }
    else {
        cout << "\nНет чисел в строке2";
    }
    }
   