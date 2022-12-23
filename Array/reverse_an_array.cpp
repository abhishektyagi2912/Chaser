#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    int start=0;
    int end=size-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    

    //reverse(arr,arr+size);   //this is in stl form
}

int main()
{
    cout << "Enter an array size" << endl;
    int n;
    cin >> n;
    cout << "Enter an arrray" << endl;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}