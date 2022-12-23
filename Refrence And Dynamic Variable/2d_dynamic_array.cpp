#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int **arr= new int *[n];  ///dynamic allocated to 2 array

    //take this starting address make 2d array
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int[n];
    }

    //taking a input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    delete []arr; //release memory   

    return 0;
}