#include <iostream>
using namespace std;

int uniquesearch(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];        //xor function that is 1^1^5^3^3=5  
    }
    return ans;
    
}

int main()
{
    int n=9;
    int arr[10]={1,2,3,4,5,1,2,3,4};
    cout<<uniquesearch(arr,n);

    return 0;
}