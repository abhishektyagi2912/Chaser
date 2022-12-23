#include <iostream>
using namespace std;
void swapalternative(int arr[], int n)
{
    for (int i = 0; i < n; i += 2) // because we travrse next to next element
    {
        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
    }
}
void printresult(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};

    swapalternative(even, 8);
    printresult(even, 8);

    return 0;
}