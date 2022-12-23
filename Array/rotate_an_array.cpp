#include <iostream>
using namespace std;

void rotate(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

int main()
{
    int size;
    cout << "enter the size" << endl;
    cin >> size;

    int arr[1000]; // this is  good either use int arr[size]
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    return 0;
}