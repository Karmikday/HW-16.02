#include <iostream>
#include <time.h>
using namespace std;
void insertionSort(int data[], int lenD)
{
    int key = 0;
    int i = 0;
    for (int j = 1; j < lenD; j++) {
        key = data[j];
        i = j - 1;
        while (i >= 0 && data[i] > key) {
            data[i + 1] = data[i];
            i = i - 1;
            data[i + 1] = key;
        }
    }
}
void Razbros(int* x, int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = rand() % n;
        int t = x[i];
        x[i] = x[k];
        x[k] = t;
    }
}

int main()
{
    srand(time(0));
    int const unsigned size = 20;
    int arr[size];
    int pos;
    int x;
    for (int i = 0; i < size; i++)
    {
        x = arr[i] = rand() % 20;
        cout << arr[i] << " ";
    }
    cout << "\nRazbros=>\n";
    Razbros(arr,size);
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == x)
        {
            pos = i; 
            break;
        }
    } 
    cout << "\nRand Chislo:" << pos << '\n';
    insertionSort(arr,pos);
    cout << "Sort ot Rand Chisl\n";
    for (size_t i = 0; i < pos; i++)
    {
        cout << arr[i] << " ";
    }
    
}