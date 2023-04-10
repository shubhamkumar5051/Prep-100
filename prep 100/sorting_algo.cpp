#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void select_sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}
void insertion_sort(int *arr, int size)

{
    for (int i = 1; i < size; i++)
    {
        int index = arr[i];
        int j = 0;
        for (j = i - 1; j >= 0; j--)
        {
            if (index < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = index;
    }
}
void insertion_sort2(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void bubble_sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// code for merge sort

void merger(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int temp[high + 1];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    for (; i <= mid; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (; j <= high; j++)
    {
        /* code */
        temp[k] = arr[j];
        k++;
    }
    for (i = low; i <= high; i++)
    {
        arr[i] = temp[i];
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merger(arr, low, mid, high);
}

// code for quick sort

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int cnt = 0;
    for (int i = low + 1; i <= high; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    int piv_index = low + cnt;
    swap(arr[low], arr[piv_index]);

    int i = low;
    int j = high;

    while (i < piv_index && j > piv_index)
    {
        while (arr[i] < arr[piv_index])
        {
            i++;
        }

        while (arr[j] > arr[piv_index])
        {
            j--;
        }
        if (i < piv_index && j > piv_index)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return piv_index;
}
void quick_sort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int k = partition(arr, low, high);
    quick_sort(arr, low, k - 1);
    quick_sort(arr, k + 1, high);
}

int main()
{
    int arr[] = {5, 3, 4, 10, 239, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    // select_sort(arr, size);
    // insertion_sort(arr, size);
    // bubble_sort(arr, size);
    // insertion_sort2(arr, size);

    // code for merge sort

    merge_sort(arr, 0, size - 1);

    // quick_sort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
