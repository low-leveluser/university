#include <iostream>
#include <string>
using namespace std;

void mas()

{
	srand(time(0));
	const int x = 10;
	int arr[x];
	for (int i = 0; i < x; i++)
	{
		arr[i] = 1 + rand() % 50;
		cout << "\nРандомная цифра: " << arr[i];
	}

	cout << "\nЗамена четных на 0: " << endl;

	for (int l = 0; l < x; l++)

	{
		if (arr[l] % 2 == 0)
			arr[l] = 0;
		cout << arr[l] << "\n";
	}

}

char cinChar()
{
	string sym;
	while (1)
	{
		cout << "Введите символ ";
		cin >> sym;
		if (sym.size() == 1 && isascii((int)sym[0]))
			return sym[0];
		else
			cout << "Введите еще раз\n";
	}
}
void func()

{

	int v[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Ввидете элементы v для матрицы:";
			cin >> v[i][j];
			cout << endl;
		}
	}
	int t = v[0][0] * v[1][1] * v[2][2] + v[0][1] * v[1][2] * v[2][0] + v[0][2] * v[1][0] * v[2][1] - v[0][2] * v[1][1] * v[2][0] - v[0][0] * v[1][2] * v[2][1] - v[0][1] * v[1][0] * v[2][2];
	cout << "Определитель = " << t << endl;

}


int main()

{
	setlocale(LC_ALL, "RU");
	mas();

	char sb;
	char* str;
	sb = cinChar();
	cout << "Введите строку ";
	cin >> str;
	if (!strchr(str, sb))
	{
		cout << "Нет тут такого символа " << sb;
		return 0;
	}
	cout << "Позиция введенного символа - " << strchr(str, sb) - str + 1;
	func();
	system("pause");
	return 0;

}
