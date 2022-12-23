#include <iostream>
using namespace std;

int main()
{
    int i=5;
    cout<<i<<endl;
    i++;

    // create refrence variable 
    int &j=i;
    j++;               //if we play with j then indirectly we play with i
    cout<<i<<endl;
    cout<<j<<endl;


    return 0;
}