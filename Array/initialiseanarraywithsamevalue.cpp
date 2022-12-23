#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    // int student[10]={0};
    fill_n(arr, 1000, 5); // this is used for intialise an enire array of same value except zero zero directly initialise

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
        // cout<<student[i]<<" ";   //this is for checking that initially it contaions garbage or zero value
    }

    return 0;
}