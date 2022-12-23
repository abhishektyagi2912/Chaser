#include <iostream>
using namespace std;

int findduplicate(int arr[],int n){
    int ans=0;
	for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=1; i<n;i++){
        ans=ans^i;                                ///we assume that these number are  1 2 3 4 5 6 7
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    findduplicate(arr,n);
    return 0;
}