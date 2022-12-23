#include<iostream>
using namespace std;

int duplicate(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }   
    }
    return res;
}
    int main(){
        int n;
        cout<<"Enter the array size"<<endl;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        duplicate(arr,n);
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
    
    return 0;
}