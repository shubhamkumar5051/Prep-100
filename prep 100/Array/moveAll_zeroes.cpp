// move all zeroes to end of an array

// 1 0 2 3 2 0 0 4 5 1
// 1 2 3 2 4 5 1 0 0 0
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force
void fun(int *arr, int count)
{
    list<int> li;
    for (int i = 0; i < count; i++)
    {
        /* code */
        if (arr[i] != 0)
        {
            li.push_back(arr[i]);
        }
    }
    int i = 0;
    for (auto it : li)
    {
        arr[i] = it;
        i++;
    }

    for (int j = li.size(); j < count; j++)
    {
        arr[j] = 0;
    }
}

void fun1(int *arr, int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        while (arr[i] != 0)
        {
            i++;
        }
        while (arr[j] == 0)
        {
            j--;
        }
        swap(arr[i], arr[j]);
        i++;
        j--;
        // display(arr, size);
    }
}

// optimal approach- using two pointers
void fun2(int *arr, int count)
{
    int i = 0;
    int j = -1;

    for (i = 0; i < count; i++)
    {
        /* code */
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int k = j + 1; k < count; k++)
    {
        if (arr[k] != 0)
        {
            swap(arr[k], arr[j]);
            j++;
        }
    }
}


int main()
{

    int arr[] = {0, 0, 11, 234, 2, 0, 0, 4, 5, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    fun(arr, size);
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}