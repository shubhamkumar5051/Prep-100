#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(int *arr, int count)
{
    int mx = 0;
    int temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == 1)
        {
            temp++;
        }
        else
        {
            if (arr[i] == 0 && temp > mx)
            {
                mx = temp;
                temp = 0;
            }
            else
            {
                temp = 0;
            }
        }
    }
    cout << mx;
}
int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    fun(arr, size);
    return 0;
}