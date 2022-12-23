#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    // create an both array length
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // create an array
    int *first = new int[len1];
    int *second = new int[len2];

    // copy value
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    // second array staring length
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merge two sorted array
    int in1 = 0;
    int in2 = 0;
    k = s;
    while (in1 < len1 && in2 < len2)
    {
        if (first[in1] < second[in2])
            arr[k++] = first[in1++];
        else
            arr[k++] = second[in2++];
    }
    while (in1 < len1)
    {
        arr[k++] = first[in1++];
    }
    while (in2 < len2)
    {
        arr[k++] = second[in2++];
    }
}

void mergesort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {3, 2, 8, 7, 1};
    int n = 5;

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}