#include <iostream>
using namespace std;
int duplicate(int arr[], int n)
{
    int count=0;
    int r = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[r-1])
        {
            arr[r] = arr[i];
            r++;
            count++;
        }
    }
    return r;
 }

int main()
{
    int n;
    cout << "Enter the array size" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int a= duplicate(arr, n);
    for (int i = 0; i < a;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}