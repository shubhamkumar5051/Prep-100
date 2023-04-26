#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force solution
// TC:- n square
void find_missing(int *arr, int count)
{
    int flag = 0;
    for (int i = 1; i <= count; i++)
    {
        flag = 0;
        for (int j = 0; j < count - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "missing no. is " << i << endl;
        }
    }
}

// better solution
// tc :- O(N) + O(N)
// SC :- O(N)
void find_missing1(int *arr, int size)
{
    int temp[size + 1] = {0};

    for (int i = 0; i < size - 1; i++)
    {
        temp[arr[i]] = 1;
    }
    for (int i = 1; i <= size; i++)
    {
        /* code */
        if (temp[i] == 0)
        {
            cout << i << endl;
        }
    }
}

// Optimal solution

// Approach 1:- O(N)
// space:- O(1)

void find_missing2(int *arr, int count)
{
    int temp = (count * (count + 1)) / 2;
    int ans = 0;
    for (int i = 0; i < count - 1; i++)
    {
        /* code */
        ans = ans + arr[i];
    }
    ans = temp - ans;
    cout << ans;
}
// Approach 2:- USING XOR

void find_missing3(int *arr, int count)
{
    int xor1 = 0;
    for (int i = 1; i <= count; i++)
    {
        xor1 = xor1 ^ i;
    }

    int xor2 = 0;
    for (int i = 0; i < count - 1; i++)
    {
        xor2 = xor2 ^ arr[i];
    }
    int ans = xor1 ^ xor2;
    cout << ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    // find_missing(arr, size + 1);
    // find_missing1(arr, size);
    // find_missing2(arr, size + 1);
    find_missing3(arr, size);
    return 0;
}
