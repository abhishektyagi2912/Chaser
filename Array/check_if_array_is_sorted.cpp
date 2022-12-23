#include <iostream>
using namespace std;

string sorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])     // we check an array that are not greater with next elemnet
            return "false";
    }
    return "true";
}

int main()
{
    int arr[1000] = {1, 2, 3, 4, 5, 6};
    int un[1000] = {2, 3, 4, 1};

    cout << sorted(arr, 6) << endl;
    ;
    cout << sorted(un, 4);

    return 0;
}