#include <iostream>
using namespace std;

bool isSOrted(int arr[],int n){
    if(n==0||n==1) return true;

    if(arr[0]>arr[1]) return false;
    else{
        bool bachehue = isSOrted(arr+1,n-1);
        return bachehue;
    }


}

int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};
    bool ans = isSOrted(arr,n);
    if(ans){
        cout<<"Array is Sorted";
    }
    else cout<<"Array is not Sorted";
    return 0;
}