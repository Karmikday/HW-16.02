#include <iostream>
#include <time.h>
using namespace std;
void sort(int A[], int size)
{
	int x, i, j, z, y;
	for (int a = 0; a < size; a++)
	{
		if (A[a] < 0)
		{
			z = a;
			break;
		}
	}
	for (int a = size - 1; a > z; a--)
	{
		if (A[a] < 0)
		{
			y = a;
			break;
		}
	}
	for (i = z; i <= y; i++)
	{
		x = A[i];
		for (j = i - 1; j >= z && A[j] > x; j--)
			A[j + 1] = A[j];
		A[j + 1] = x;
	}
}
int main()
{
	srand(time(0));
	int const size = 20;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 40 - 20;
		cout << arr[i] << " ";
	}
	cout << "\nSort->" << endl;
	sort(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	
}