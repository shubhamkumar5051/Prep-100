// 0 1 1 2 3 5 8 13 21 34 56

#include <iostream>
using namespace std;

//looping method

// void fibonacci(int num)
// {
//     int first = -1;
//     int sec = 1;
//     int third = first + sec;

//     for (int i = 0; i < num; i++)
//     {
//         cout << third << " ";
//         first = sec;
//         sec = third;
//         third = first + sec;
//     }
// }

// recurssion method

int fibonacci(int num)
{
    if (num <= 1)
    {
        return num;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i <num; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}