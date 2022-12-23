#include <iostream>
#include <climits> //int_max ,min
using namespace std;

int getmax(int arr[], int n)
{
    int max = INT_MIN; // this is used because we find max element in negative and int min is highest shortest value
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int getmin(int arr[], int n)
{
    int min = INT_MAX; // this is used because we find mix element in negative and int min is highest value
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "enter the size" << endl;
    cin >> size;

    int arr[1000]; // this is  good either use int arr[size]
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << getmax(arr, size) << endl;
    cout << getmin(arr, size);

    return 0;
}