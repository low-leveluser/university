#include <iostream>
using namespace std;

double garm(double a, double b)
{
    if (a != 0 && b != 0)
        cout << "Итог: " << (2 * a * b) / (a + b) << endl;
    else
        cout << "Попробуйте ввести число еще раз\n";
    return (2 * a * b) / (a + b);
}

void func(double& q, double& z, double& c)
{
    int mas[3], tmp;
    q = mas[0], z = mas[1], c = mas[2];
    for (int k = 0; k < 2; k++) {
        for (int j = 0; j < 3 - k - 1; j++) {
            if (mas[j] > mas[j + 1]) {
                tmp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = tmp;
            }
        }
    }
    q = mas[0], z = mas[1], c = mas[2];
}

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "1 подзадание" << endl;
    cout << "Введите значения: " << endl;
    double a, b;
    cin >> a >> b;
    garm(a, b);

    double q, z, c;
    cout << "2 подзадание" << endl;
    cout << "Enter numbers\n";
    cin >> q >> z >> c;
    func(q, z, c);
    cout << q << " " << z << " " << c;
    return 0;
}
