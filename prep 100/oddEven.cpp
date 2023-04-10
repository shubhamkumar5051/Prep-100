#include <iostream>
using namespace std;

// int main()
// {
//     int num;
//     cin >> num;

//     if (num / 2 * 2 == num)
//     {
//         cout << "Even" << endl;
//     }
//     else
//     {
//         cout << "odd" << endl;
//     }
//     return 0;
// }

int main()
{
    int num;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    return 0;
}

int main()
{
    int num;
    cin >> num;

    if (num & 1 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    return 0;
}