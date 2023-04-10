
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
    int b[end+1];
    int i = start;   
    int j = mid + 1; 
    int k = start;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            b[k] = arr[j];
            k++;
            j++;
        }
    }

    // aur jo bhi element reh gaya ho uska intezaam yaha pe kiya jaa rha hai.

    for (; i <= mid; i++)
    {
        b[k] = arr[i];
        k++;
    }
    for (; j <= end; j++)
    {
        /* code */
        b[k] = arr[j];
        k++;
    }


    // now transfer element into original array

    for (i = start; i <= end; i++)
    {
        arr[i] = b[i];
    }
}

void merge_sort(int arr[], int start, int end)
{
    // int mid = start + end / 2;
    if (start == end)
    {
        return;
    }
    
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    
}

int main()
{
    int arr[] = {12, 2, 1, 56, 89, 47, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, 0, size - 1);

    // display
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}