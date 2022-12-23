#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int arr[4] = {3, 4, 1, 2};
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i + 1], arr[i]);
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}