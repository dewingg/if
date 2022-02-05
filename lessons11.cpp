#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;


int** mat;
int str, stb;
int pos_x = 1, pos_y = 1;
int pos_x_end, pos_y_end;
void matvivod() {
    system("cls");
    for (int i = 0; i < stb; i++)
    {
        for (int j = 0; j < str; j++)
        {
            cout << char(mat[i][j]);
        }
        cout << '\n';
    }
}


int main()
{

    cout << "\n koll strok== ";
    cin >> stb;
    stb += 2;
    cout << " koll stolb == ";
    cin >> str;
    str += 2;

    srand(time(NULL));

    pos_x_end = rand() % (stb - 3) + 2;
    pos_y_end = rand() % (str - 3) + 2;
   
    mat = new int* [stb];

    for (int i = 0; i < stb; i++)
    {
        mat[i] = new int[str];
    }


    for (int i = 0; i < stb; i++)
    {
        for (int j = 0; j < str; j++)
        {
            if (i == 0 or j == 0 or i == stb - 1 or j == str - 1)
                mat[i][j] = 219;
            else 
            mat[i][j] = ' ';

            if (pos_x == i and pos_y == j) {
                mat[i][j] = '*';
            }
            if (pos_x_end == i and pos_y_end == j) {
                mat[i][j] = 176;
            }
        }
    }

    char hod;

    do {
        if (pos_x == pos_x_end and pos_y == pos_y_end) {
            break;

        }

        matvivod();


        hod = _getch();


        mat[pos_x][pos_y] = ' ';
        switch (hod) {
        case 80:
            if (pos_x != stb - 2)
                pos_x++;
            break;
        case 77: 
         if   (pos_y != str -  2)
             pos_y++;
            break;
        case 72:
          if  (pos_x != 1)
            pos_x--;
            break;
        case 75:
         if  (pos_y != 1)
            pos_y--;
            break;
        }
        mat[pos_x][pos_y] = '*';

        

    } while (hod != 27);

    if (pos_x == pos_x_end and pos_y == pos_y_end) {
        cout << "\nYou win";

    }
    return 0;
}