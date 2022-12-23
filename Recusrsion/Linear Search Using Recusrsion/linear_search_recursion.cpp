#include <iostream>
using namespace std;
bool LinearSearch(int arr[], int n, int key)
{
    // base case
    if (n == 0)
        return false;

    if (arr[0] == key)
        return true;
    else
    {
        bool remaining = LinearSearch(arr + 1, n - 1, key);
        return remaining;
    }
}

int main()
{
    int n = 7;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int key = 7;
    int ans = LinearSearch(arr, n, key);
    if (ans)
    {
        cout << "Present" << endl;
    }
    else
        cout << "Absent" << endl;

    return 0;
}