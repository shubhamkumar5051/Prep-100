#include <bits/stdc++.h>
using namespace std;

void selection_srt(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        int j = 0;
        for (j = i + 1; j < n; j++)
        {
            /* code */
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}
   
void bubble_Sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            /* code */
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertion_sort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = 0;
        for (j = i - 1; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void merger(int *arr, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = i;
    int temp[end + 1];

    while (i <= mid && j <= end)
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
        /* code */
        temp[k] = arr[i];
        k++;
    }

    for (; j <= end; j++)
    {
        temp[k] = arr[j];
        k++;
    }

    for (i = start; i <= end; i++)
    {
        arr[i] = temp[i];
    }
}
void merge_sort(int *arr, int start, int end)
{
    if (start == end)
    {
        return;
    }
    int mid = (start + end) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    merger(arr, start, mid, end);
}

int partition(int *arr, int start, int end)
{
    int temp = arr[start];
    int cnt = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= temp)
        {
            cnt++;
        }
    }
    int pivot_index = start + cnt;
    swap(arr[pivot_index], arr[start]);
    // int pivot_index = start + cnt;

    int i = start;
    int j = pivot_index + 1;
    while (i < pivot_index && j > pivot_index)
    {
        while (arr[i] < arr[pivot_index])
        {
            i++;
        }

        while (arr[j] > arr[pivot_index])
        {
            j--;
        }

        if (i < pivot_index && j > pivot_index)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivot_index;
}
void quick_sort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = partition(arr, start, end);
    quick_sort(arr, start, pivot - 1);
    quick_sort(arr, pivot + 1, end);
}

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 58, 2, 8, 12, 90, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    selection_srt(arr, size);
    display(arr, size);

    // bubble_Sort(arr, size);
    // display(arr, size);

    // insertion_sort(arr, size);
    // dipslay(arr,size);

    // merge_sort(arr, 0, size - 1);
    // display(arr, size);

    // quick_sort(arr, 0, size - 1);
    // display(arr, size);

    return 0;
}