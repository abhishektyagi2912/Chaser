#include <iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e, int key)
{
    // base case element not found
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;
    // cout<<mid<<endl;
    // base case element found
    if (arr[mid] == key)
        return true;

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int n = 7;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int key = 10;
    int ans = binarySearch(arr, 0, n, key);
    if (ans)
    {
        cout << "Present" << endl;
    }
    else
        cout << "Absent" << endl;

    return 0;
}