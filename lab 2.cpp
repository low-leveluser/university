﻿#include<iostream>
#include<string>

using namespace std;
int save = 0, sort = 0;
//----второе задание
void Sort(int* mas, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		save = i + 1;
		sort = mas[save];
		for (int j = i + 1; j > 0; j--)
		{
			if (sort < mas[j - 1])
			{
				mas[j] = mas[j - 1];
				save = j - 1;
			}
		}
		mas[save] = sort;
	}
	cout << endl << "Полученный результат: ";
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//----функция 3его задания
void lines(){
	string z, z1, z2;

	cout << "Введите строку задание3 - \n";
	cin >> z;

	cout << "Введите подстроку которую заменить - \n";
	cin >> z1;

	cout << "Введите свою подстроку - \n";
	cin >> z2;
	z.replace(z.find(z1), z1.size(), z2);
	cout << z << " - полученная строка" << endl;
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





int main()
{
	setlocale(LC_ALL, "ru");
	//----Первое задание
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	string str;
	cout << "Введите строку задание 1 сжатие" << endl;
	cin >> str;
	int m = 1;
	string t;
	char p = str[0];
	for (int i = 1; i < str.length() + 1; i++)
	{
		if (p == str[i])
			m++;
		else
		{
			if (m > 1)
				t = t + to_string(m) + p;
			else
				t = t + p;
			m = 1;
			p = str[i];
		}
	}
	cout << "сжатие\n" << t << endl;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//----второе задание
	int n;
	cout << "Количество элементов ";
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "массива";
		cin >> arr[i];
	}
	Sort(arr, n);
	delete[] arr;

	//----3е задание
	lines();
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	system("pause");


}
