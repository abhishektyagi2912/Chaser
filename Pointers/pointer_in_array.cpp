#include <iostream>
using namespace std;

int main()
{
    int arr[3]={0,2,3};
    cout<<arr<<endl;
    cout<<*arr+1<<endl;    //0th index ko +1 kr dega
    cout<<*arr<<endl;      //0th index ki value dega
    cout<<*(arr+1)<<endl;  
    
    int i=2;
    cout<<i[arr]<<endl;
    return 0;
}