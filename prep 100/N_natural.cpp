#include <iostream>
using namespace std;

int sumNatural(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num + sumNatural(num - 1);
    }
}
int main()
{
    int num;
    cin >> num;

    int ans = 0;

    // method 1
    //  for (int i = 1; i <= num; i++)
    //  {
    //      /* code */
    //      ans += i;
    //  }

    // method 2
    //  ans = (num * (num + 1)) / 2;

    // method 3 (Recurssion)
    ans = sumNatural(num);
    cout << ans;
    return 0;
}