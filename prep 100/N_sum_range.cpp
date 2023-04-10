#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1;
    int num2;
    cin >> num1 >> num2;

    return 0;
}

// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;

//     int lr = max(num1, num2);
//     int sm = min(num1, num2);

//     int ans = ((lr * (lr + 1)) / 2 - (sm * (sm + 1)) / 2 )+ sm;
//     cout << ans;
//     return 0;
// }

int sumRange(int num1, int num2)
{
    int small = 0;
    int larger = 0;
    int ans = 0;
    if (num1 == num2)
    {
        return num1;
    }
    else
    {
        if (num1 > num2)
        {
            small = num2;
            larger = num1;
        }
        else
        {
            small = num1;
            larger = num2;
        }
    }

    for (int i = small; i <= larger; i++)
    {
        /* code */
        ans += i;
    }
    return ans;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int ans = sumRange(num1, num2);
    cout << ans << endl;
    return 0;
}