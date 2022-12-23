#include <iostream>
#include <climits>
using namespace std;
int largestSum(int arr[][3], int i, int j)
{
    int column=-1;
    int max=INT_MIN;
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        
        if (sum>max)
        {
            max=sum;
            column=j; // this is for print column of highest number
        }
    }
    cout<<"MAX sum Is "<<max<<endl;
    return column;
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
    int s=largestSum(arr, 3, 3);
    cout<<s;

    return 0;
}