#include <iostream>
using namespace std;

bool linearsearch(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the nuber that you want to search" << endl;
    cin >> n;
    int size = 10;
    int arr[10] = {1, 3, 6, 9, 12, 45, 13, 12, 11};

    bool found = linearsearch(arr, size, n);

    if (found)
    {
        cout << "Number is present" << endl;
    }
    else
    {
        cout << "Number is not present" << endl;
    }

    return 0;
}