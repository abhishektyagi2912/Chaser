#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    // error
    //    arr=arr+1;
    int *ptr = &arr[0];
    cout << ptr << endl;

    ptr += 1;
    cout << ptr << endl;

    char ch[6]="abcde";
    char *c = &ch[0];
    /// print all character
    cout<<c<<endl;

    char temp ='z';
    char *p=&temp;
    cout<<p<<endl;    //print first char and bakki garbage value hogi

    return 0;
}