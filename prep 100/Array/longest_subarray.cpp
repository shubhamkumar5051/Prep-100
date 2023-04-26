#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force- using loops
// tc:- O(N cube)
// space :- O(1)
int find_subarray(int *arr, int count, int key)
{
    int max_len = 0;
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                if (sum == key)
                {
                    max_len = max(max_len, k - i + 1);
                }
            }
        }
    }
    return max_len;
}

// optimising brute force
// tc:- O(N square)
// space :- O(1)

int find_subarray1(int *arr, int count, int k)
{
    int max_len = 0;
    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum = 0;
        for (int j = i; j < count; j++)
        {
            sum = sum + arr[j];

            if (sum == k)
            {
                max_len = max(max_len, sum);
            }
        }
    }
    return max_len;
}

// Better solution using hashing
int find_subarray2(int *arr, int count, int k)
{
    unordered_map<int, int> mp;
}
int main()
{
    int arr[] = {1, 2, 1, 4, 5, 3, 9, 8, 0, 0, 1, 2, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    // int ans = find_subarray(arr, size, k);
    // int ans = find_subarray1(arr, size, k);
    int ans = find_subarray2(arr, size, k);
    cout << ans;
    return 0;
}