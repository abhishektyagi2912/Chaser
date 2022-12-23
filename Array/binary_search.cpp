#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int n){
    int start;
    int end;
    start = 0;
    end = size-1;
    // binary_search(start,end,key)  stl form of binary search
    while (start<=end)
    {
        int mid = (start+end)/2;
        if (arr[mid]==n)
        {
            return mid;
        }
        else if (arr[mid]>n)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
        
    }
    return -1;
    
}

    int main(){
        int n;
        cout<<"Enter the nuber that you want to search"<<endl;
        cin>>n;
        int size = 6;
        //int arr[10] = {1,3,6,9,12,45,13,12,11};
        int arr[6]={-1,0,3,5,9,12};
        int found = binarysearch(arr,size,n);
        cout<<found<<endl;

    return 0;
}