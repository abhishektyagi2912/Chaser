#include<bits/stdc++.h>
using namespace std;
void mergearray(int arr1[],int n,int arr2[],int m, int arr3[]){
    int i=0,j=0,k=0;
    while (i<n)
    {
        arr3[k++]=arr1[i++];
    }
    while (j<m)
    {
        arr3[k++]=arr2[j++];
    }
    //sort(arr3,arr3+n+m);
    
}

    int main(){
        int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    int arr2[] = {1, 2, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1+n2];
    mergearray(arr1, n1,arr2, n2, arr3);
 
    cout << "Array after merging" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
    return 0;
}