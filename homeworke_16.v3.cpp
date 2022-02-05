#include <iostream>
#include <windows.h>
#include <string>

using namespace std;




class student {
private:
    int age = 20;
    string name = "Name";

public:

    // Возварщение данных
    int getAge() {
        return age;
    }

    string getName() {
        return name;
    }

    // Занесения данных
    void putAge(int a) {
        age = a;
    }

    void putName(string n) {
        name = n;
    }

    //конструктор
    student(int a, string n) {
        putAge(a);
        putName(n);
    }

    student() {
    }






};
class director {
private:
    int age = 38;
    string name = "Name";

public:
    // Возварщение данных
    int getAgedirector() {
        return age;
    }

    string getName() {
        return name;
    }

    // Занесения данных
    void putAgedirector(int a) {
        age = a;
    }

    void putNamedirector(string n) {
        name = n;
    }

    //конструктор
    director(int b, string n) {
        putAgedirector(b);
        putNamedirector(n);
    }

};
class teacher {
private:
    int age = 58;
    string name = "Name";
public:
    int getAge() {
        return age;
    }

    string getName() {
        return name;
    }

    // Занесения данных
    void putAgeteacher(int a) {
        age = a;
    }

    void putNameteacher(string n) {
        name = n;
    }

    //конструктор
    teacher(int c, string n) {
        putAgeteacher(c);
        putNameteacher(n);
    }





};




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    student s1(12, "Петя"); 

    director s2(38, "Нуне");

    teacher s3(58, "Максим");


    cout << " Age = " << s1.getAge() << " Name = " << s1.getName();

    cout << " Age = " << s2.putAgedirector() << " Name = " << s2.putNamedirector();

    cout << " Age = " << s3.getAgeteacher() << " Name = " << s3.getNameteacher();
    
}

