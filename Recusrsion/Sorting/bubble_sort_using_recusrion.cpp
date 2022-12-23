#include <iostream>
using namespace std;
void bubblesort(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
        return;

    // logic or operation

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    //recusrive call tail recusrion
    bubblesort(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}