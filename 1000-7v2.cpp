﻿#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <string>

using namespace std;

char c[1000];

void vivod() {

    fstream ofs("output.txt", ios_base::in);

    cout << "Файл хранит текст: ";
    ofs >> c;
    cout << c;


    ofs.close();
}


void vvod() {
    fstream ifs("output.txt", ios_base::out);

    cout << "Введите текст: ";
    gets_s(c);
    ifs << c;

    ifs.close();
}


int main()
{
    
    system("color 3");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Если вы хотите записать в файл нажмите 1\n";
    cout << "Если вы хотите считать с файла нажмите 2\n";
    cout << "Нажмите esc для выхода\n";

    char put = _getch();


    switch (put) {
    case '1':
        vvod();
        break;
    case '2':
        vivod();
        break;
    case 25:
        cout <<"\n";
    case 27:
        return 0;
        break;
    }


    return 0;
}