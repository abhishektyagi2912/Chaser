#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int n=4;
    int a=0;
    for (int i = 0; i < n; i++)
    {
        a = a * 10 + arr[i];
    }
    a+=1;
    for (int i = 0; i < n; i++)
    {
        a=a/10+arr[i];
        cout<<arr[i];
    }
    
    
}