#include <iostream>
#include <time.h>
using namespace std;
void Sort2(int arr[],int size)
{
	int x,j;
	for (int i = 0; i < size; i++)
	{
		x = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > x; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}
void Sort1(int arr[],int size)
{
	int x,j;
	for (int i = 0; i < size; i++)
	{
		x = arr[i];
		for (j = i - 1; j >= 0 && arr[j] < x; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int arr[10];
	int n;
	do
	{
		cout << "Сортировка массива по возрастанию или по убыванию:\n";
		for (int i = 0; i < 10; i++)
		{
			arr[i] = rand() % 100;
			cout << arr[i] << "\n";
		}
		cout << "1 - по убыванию\n2 - по возрастанию\n";
		cin >> n;
		if (n == 1)
		{
			Sort1(arr,10);
			for(int i = 0; i < 10; i++)
				{
					cout << arr[i] << " ";
				}
			cout << "\n";
		}
		else if (n == 2)
		{
			Sort2(arr, 10);
			for (int i = 0; i < 10; i++)
			{
				cout << arr[i] << " ";
			}
			cout << "\n";
		}
		else if (n == 0)
		{
			exit(0);
			return 0;
		}
		else
		{
			cout << "Неверное значение :(";
		}
		cout << "\nЕсли хотите продолжить, нажмите 1\n";
		cin >> n;
	} while (n==1);
}