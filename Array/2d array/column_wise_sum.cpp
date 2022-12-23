#include <iostream>
using namespace std;
void columnSum(int arr[][3], int i, int j)
{
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int arr[3][3];

    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    columnSum(arr, 3, 3);

    return 0;
}
//// same as row sum bs change krde upr ka element 