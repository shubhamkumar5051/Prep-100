#include <iostream>
using namespace std;

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}
void left_rotate(int *arr, int size, int d)
{
    int i = 0;
    int j = d - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "pehla step :- ";
    display(arr, size);
    cout << endl;

    i = d;
    j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "dusra step :- ";
    display(arr, size);
    cout << endl;

    i = 0;
    j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "last step :- ";
    display(arr, size);
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int d = 3;
    d = d % size;
    cout << d << endl;
    left_rotate(arr, size, d);
    display(arr, size);
    cout << endl;
}