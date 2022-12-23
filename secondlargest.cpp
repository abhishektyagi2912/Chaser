#include <bits/stdc++.h>

using namespace std;

void secondlargest(int arr[], int n)
{
    int res = INT_MIN;
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
        if (arr[i] > largest)
            largest = arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] < largest && arr[i] > res)
            res = arr[i];
cout << res << endl;
}
int main()
{
    // int arr[]={1,4,5,6,7};
    int n = 5;
    int arr[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    secondlargest(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}