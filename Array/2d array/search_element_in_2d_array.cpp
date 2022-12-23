#include <iostream>
using namespace std;

int main()
{
    int key = 4;
    int n = 3;
    int m = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {4, 7, 8}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                cout << i <<" "<< j;
            }
        }
        cout << "\n";
    }

    return 0;
}