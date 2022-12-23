#include <iostream>
using namespace std;

int Partition(int arr[], int s, int e)
{
    int pviot = arr[s];
    // count the element lower than the pviot element
    int count = 0;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i] <= pviot)
            count++;
    }
    // pviot ko right jagah place krna h
    int pviotIndex = s + count;
    swap(arr[pviotIndex], arr[s]);

    // left or right ko check krte hue jana h
    int i = s, j = e;
    while (i < pviotIndex && j > pviotIndex)
    {
        while (arr[i] <= pviotIndex)
        {
            i++;
        }
        while (arr[j] >= pviotIndex)
        {
            j++;
        }
        if (i < pviotIndex && j > pviotIndex)
            swap(arr[i++], arr[j--]);
    }
    return pviotIndex;
}

void quicksort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;
    // make piviot partion
    int p = Partition(arr, s, e);

    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {3, 2, 8, 7, 1};
    int n = 5;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}