#include <iostream>
using namespace std;
int sort, save = 0;
double chislo(int x, int y, int z) {
    if (x < y and z < y)
        return y;
    else if (x < z and y < z)
        return z;
    else
        return x;

}
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


int main()
{
	setlocale(LC_ALL, "ru");

    int x, y, z;
	cout << "Введите 3 целочисленных числа " << endl;
    cin >> x >> y >> z;
    cout << "Наибольшее: " << chislo(x, y, z) << endl;




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
   
}


