#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i || j == 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}