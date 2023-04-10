#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern1(int n)
{
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < ; j++)
      {
        /* code */
      }
      
   }
   
}
int main()
{
    int tc;
    cin >> tc;
    while (tc-- > 0)
    {
        int n;
        cin >> n;
        pattern1(n);
    }

    return 0;
}