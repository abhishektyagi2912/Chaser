#include <iostream>
using namespace std;

int checkarray(int arr[], int n)
{
    if (n == 1 || n == 0)
        return 1;
    if (arr[n - 1] < arr[n - 2])
        return 0;

    return checkarray(arr, n - 1);
}
int main()
{
    int n = 6;
    int arr[] = {20, 23, 23, 45, 78, 88};

    if (checkarray(arr, n))
        cout << "true";
    else
        cout << "false";

    return 0;
}