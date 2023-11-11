#include <iostream>
#include <stdio.h>
using namespace std;

void reversearr1(int a[], int size)
{
    int b[size];
    for (int i = 0; i < size; i++)
    {
        b[i] = a[size - 1 - i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << " ";
    }
}

void reversearr2(int a[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
   
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int size = 5;
    reversearr2(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}