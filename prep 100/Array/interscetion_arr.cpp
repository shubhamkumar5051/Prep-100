#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// void find_interscetion(int *arr1, int *arr2, int count, int count1)
// {
//     map<int, int> mp;
//     for (int i = 0; i < count; i++)
//     {
//         mp[arr1[i]]++;
//     }
//     int cnt = 0;

//     for (int i = 0; i < count1; i++)
//     {
//         int temp = arr2[i];

//         if (mp[temp] > 0)
//         {
//             cnt++;
//             cout << temp << " ";
//             mp[temp]--;
//         }
//     }

//     cout << endl
//          << cnt << endl;
// }

void find_interscetion1(int *arr1, int *arr2, int count, int count1)
{
    int i = 0;
    int j = 0;
    vector<int> v;
    // sorting is imp.. cozz this code logic is meant for intersection of two sorted array
    sort(arr1, arr1 + count);
    sort(arr2, arr2 + count1);
    while (i < count && j < count1)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            if (arr2[j] < arr1[i])
            {
                j++;
            }
            else
            {
                if (arr1[i] == arr2[j])
                {
                    v.push_back(arr1[i]);
                    i++;
                    j++;
                }
            }
        }
    }

    for (auto it : v)
    {
        cout << it << " ";
    }
}
int main()
{
    int arr1[] = {5, 10, 10, 10};
    int arr2[] = {15, 5, 5, 10, 4};
    int count = sizeof(arr1) / sizeof(arr1[0]);
    int count1 = sizeof(arr2) / sizeof(arr2[0]);

    // find_interscetion(arr1, arr2, count, count1);
    find_interscetion1(arr1, arr2, count, count1);
    return 0;
}