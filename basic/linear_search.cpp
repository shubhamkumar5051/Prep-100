#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7, 8, 9, 45, 78, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "keys found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}