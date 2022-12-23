#include <iostream>
using namespace std;

int insertanarray(int arr[], int n, int pos, int value)
{
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    return (n + 1);
}
int main()
{
    int arr[100] = {1, 4, 6, 5, 7, 9, 10, 13};
    int n = 8;
    int pos, value;
    cout << "Enter the position: ";
    cin >> pos;
    cout << "Enter the value: ";
    cin >> value;

    cout << "Before insertion" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After insertion" << endl;
    n = insertanarray(arr, n, pos, value);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}