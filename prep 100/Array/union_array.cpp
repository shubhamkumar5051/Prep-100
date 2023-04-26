#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void find_union(int *arr1, int *arr2, int count, int count1)
// {
//     set<int> st;

//     for (int it = 0; it < count; it++)
//     {
//         st.insert(arr1[it]);
//     }

//     for (int i = 0; i < count1; i++)
//     {
//         st.insert(arr2[i]);
//     }

//     for (auto it : st)
//     {
//         cout << it << " ";
//     }
// }

void find_union1(int *arr1, int *arr2, int count, int count1)
{
    vector<int> v;
    // if we get unsorted array.. then sort them first
    // sort(arr1, arr1 + count);
    // sort(arr2, arr2 + count1);
    int i = 0;
    int j = 0;

    while (i < count && j < count1)
    {
        if (arr1[i] <= arr2[j])
        {
            if (v.size() == 0 || arr1[i] != v.back())
            {
                v.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (v.size() == 0 || arr2[j] != v.back())
            {
                v.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < count)
    {
        if (v.size() == 0 || arr1[i] != v.back())
        {
            v.push_back(arr1[i]);
        }
        i++;
    }

    while (j < count1)
    {
        if (v.size() == 0 || arr2[j] != v.back())
        {
            v.push_back(arr2[j]);
        }
        j++;
    }

    for (auto it : v)
    {
        cout << it << " ";
    }
}
int main()
{
    int arr1[] = {5, 10, 15, 5, 10};
    int arr2[] = {15, 5, 5, 10, 4};
    int count = sizeof(arr1) / sizeof(arr1[0]);
    int count1 = sizeof(arr2) / sizeof(arr2[0]);

    // find_union(arr1, arr2, count, count1);
    find_union1(arr1, arr2, count, count1);
    return 0;
}