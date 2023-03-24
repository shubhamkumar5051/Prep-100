#include <iostream>
using namespace std;

int solve()
{
    int arr[] = {1, 5, 7, 9, 12, 56, 89};
    int size = sizeof(arr) / sizeof(arr[0]);

    int first = 0;
    int last = size - 1;
    int mid;

    int key;
    cin >> key;

    while (first <= last)
    {
        mid = first + (last - first) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return 0;
}
int main()
{
    int ans = solve();
    if (ans)
    {
        cout << "element found at index :- " << ans << endl;
    }
    else
    {
        cout << "No element found " << endl;
    }
    return 0;
}