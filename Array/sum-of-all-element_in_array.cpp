#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int y = 0;
    for (int i = 0; i <= size; i++)
    {
        y += i;
    }
    return y;
}

int main()
{
    int a[4];
    cout << "enter the array of 4 size";
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    cout << sum(a, 4);

    return 0;
}