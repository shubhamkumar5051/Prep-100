#include <iostream>
using namespace std;

bool isSorted(int *arr, int len)
{
    if (len == 0 || len == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr + 1, len - 1);
    }
}

int sumArray(int arr[], int size)
{
    if (size < 1)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    return arr[size - 1] + sumArray(arr, size - 1);
    // return arr[0] + sumArray(arr+1, size - 1);
}

bool linearSearch(int *arr, int size, int key)
{
    if (arr[0] == key)
    {
        return true;
    }
    if (size == 0)
    {
        return false;
    }
    return linearSearch(arr + 1, size - 1, key);
}

bool Binary(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return true;
        }

        if (arr[mid] > key)
        {

            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

void show(int *arr, int low, int high, int key)
{
    for (int i = low; i <= high; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "key is : " << key << endl;
    cout << endl;
}
bool binarySearch(int *arr, int low, int high, int key)
{
    int mid = low + (high - low) / 2;
    show(arr, low, high, key);
    // base case
    if (low > high)
        return false;

    if (arr[mid] == key)
    {
        return true;
    }

    // recurssive
    if (arr[mid] > key)
    {
        return binarySearch(arr, low, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, high, key);
    }
}

int main()
{
    // int arr[5] = {2, 4, 9, 67, 98};
    // int size = 5;
    // int key = 6897;
    // bool ans = isSorted(arr, size);
    // int answer = sumArray(arr, size);
    // bool temp = linearSearch(arr, size, key);
    // if(temp)
    // {
    //     cout<<"element found"<<endl;
    // }else{
    //     cout<<"not found"<<endl;
    // }
    //  if (ans)
    //  {
    //      cout << "Array is sorted";
    //  }
    //  else
    //  {
    //      cout << "Array is not sorted";
    //  }

    // program for binary search
    // int arr[7] = {3, 5, 7, 9, 12, 14, 18};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int key = 18;
    // bool ans = Binary(arr, size, key);
    // if (ans)
    //     cout << "mil gya";
    // else
    //     cout << "Nahi";

    // program for binary search using recurssion
    int arr[7] = {3, 5, 7, 9, 12, 14, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 12;
    int low = 0;
    int high = size - 1;
    int ans = binarySearch(arr, low, high, key);
    if (ans)
        cout << "mil gya";
    else
        cout << "Nahi";
    return 0;
}
