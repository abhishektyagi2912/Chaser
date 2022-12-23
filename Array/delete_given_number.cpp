#include <iostream>
using namespace std;
int deleteanarray(int arr[], int size, int n)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            break;
        }
    }
    for (int j = i; j < size - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return (size - 1);
}

int main()
{
    int n = 3;
    int x;
    cout << "Enter the value: ";
    cin >> x;
    int arr[1000] = {1, 4, 6};

    cout << "Before insdeletion" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After deletion" << endl;
    n = deleteanarray(arr, n, x);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}