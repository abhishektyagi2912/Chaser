#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    //base case
    if (n <= 1)
        return;

    insertionSort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (arr[j] > last && j >= 0)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

int main()
{
    int arr[5] = {3, 2, 8, 7, 1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n = 5;

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}