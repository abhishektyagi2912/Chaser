// this is the dp approach

#include <iostream>
using namespace std;

int main()
{
    int r = 5;
    int arr[5][5];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == i || j == 0)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}