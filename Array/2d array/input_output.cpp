#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    // int arr[3][4] ={1,2,3,4,5,6,7,8,9,10,11};   //hum ese bhi print kr skte h 2d array ko but humko sock=hke krna h to niche dekh
    // int arr[3][4] ={{1,2,3},{3,4,5},{7,8,9},{8,6,7}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Matrix is :- " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}