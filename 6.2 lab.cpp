#include <iostream>
using namespace std;

void menu(int& a, int& b, int& c) {
    int d = 0; //для выбора варианта второго меню
    while (d != 4) { // цикл для запуска выбора
        cout << "1 - Ввод верхнего предела " << endl;
        cout << " Число - " << a << endl; // вывод существующего числа
        cout << "2 - Ввод нижнего предела " << endl;
        cout << " Число - " << b << endl; // вывод существующего числа
        cout << "3 - Изменить число " << endl;
        cout << " Число - " << c << endl; // вывод существующего числа
        cout << "4 - Выйти " << endl;
        cout << "Выберите действие ";
        cin >> d;
        switch (d) {
        case(1):
            cout << "Изменить "; // изменение верхнего предела
            cin >> a;
            cout << endl;
            break;
        case(2):
            cout << "Изменить "; // изменение нижнего предела
            cin >> b;
            cout << endl;
            break;
        case(3):
            cout << "Изменить входящее число на - "; // изменение числа
            cin >> c;
            cout << endl;
            break;
        }
        if (d == 4) exit;
    }
}

void vvod(int& a, int& b) { //функция ввода числа
    int c;
    cout << "Введи входящее число" << endl;
    cin >> c;
    while (true) { // истина
        if (a < c && c < b) {
            cout << "Число входит в интервал" << endl;
            break;
        }
        else (false); // ложь
        {
            menu(a, b, c);
        }
    }
}

int main()
{
    int a, b;
    setlocale(LC_ALL, "ru");
    cout << "Меню" << endl;
    cout << "*********************************************" << endl;
    vvod(a, b);
    cout << "*********************************************" << endl;
    system("pause");
    return 0;
}

