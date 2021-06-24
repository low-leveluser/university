#include <iostream>
using namespace std;
void func(int x, int y = 0, int d = 10000) {
    if (x > 9999 && x < 99999)
    {
        for (int i = 0; i < 5; i++)
        {
            y = x / d;
            cout << y << endl;
            x %= d;
            d /= 10;
        }
    }
}
float avg(int size, int* mas)
{
    int	a = 0;
    for (int i = 0; i < size; i++)
        a += mas[i];
    return ((float)a / size);
}



int main()
{
    setlocale(LC_ALL, "RU");
    int x, y, d;
    cout << "1 подзадание" << endl;
        
    cin >> x;
    func(x, y=0, d=10000);

    char a, b;
    cout << "2 подзадание" << endl;
    cout << "Введите латинскую букву нижнего регистра: " << endl;
    cin >> a;

    b = toupper(a); //функция заменяет буквы нижнего региста на буквы верхнего регистра
    cout << "Ваша буква верхнего регистра - " << b <<endl;


    int size;
    cout << "3 подзадание" << endl;
    cin >> size;
    int  *arr=new int[size];
    cout << "Введите элементы: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Итог: " << avg(size, arr);

    delete[] arr;
    return (0);
}
