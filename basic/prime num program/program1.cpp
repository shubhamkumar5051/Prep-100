#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check_prime(int num)
{
    for (int i = 2; /* i < num  , i <= num / 2 */ i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cin >> num;
    int flag = check_prime(num);
    if (flag)
    {
        cout << "prime " << endl;
    }
    else
    {
        cout << "No-prime" << endl;
    }
   
    return 0;
}