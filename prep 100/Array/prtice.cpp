#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force solution using loops
// tc: O(N square)
// SC:- O(1)
void fun(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int cnt = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt++;
            }
        }
        if (cnt == 1)
        {
            cout << arr[i];
        }
    }
}

// better solution uisng hashing
// tc:- O(N) + O(N) + O(N)
// sc:- O(max_element)
void fun1(int *arr, int size)
{
    int maxi = 0;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int temp[maxi + 1] = {0};

    for (int i = 0; i < size; i++)
    {
        temp[arr[i]]++;
    }

    for (int i = 0; i < maxi + 1; i++)
    {
        if (temp[i] == 1)
        {
            cout << i;
        }
    }
}

// optimal solution
// using map data structure

void fun2(int *arr, int count)
{
    map<int, int> mp;
    for (int i = 0; i < count; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second == 1)
        {
            cout << it.first;
        }
    }
}

// optimal solution
// using XOR operation :- same element ko xor karne se element cancel ho jaata hai

void fun3(int *arr, int size)
{
    int xor1 = 0;
    for (int i = 0; i < size; i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    cout << xor1;
}
int main()
{
    int arr[] = {2, 2, 1, 1, 10, 10, 4, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // fun(arr, size);
    // fun1(arr, size);
    // fun2(arr, size);
    fun3(arr, size);
    return 0;
}