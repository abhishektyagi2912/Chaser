#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int a=n;
    a++;        ///no change in n you know copy bn jati h isliye
    cout<<n<<endl;

    int *p= &n;
    (*p)++;      //copy nhi bnti h 
    cout<<n<<endl;

    //copying a pointer
    int *q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;


    //important concepts
    int i=3;
    int *pt=&i; 
    // (*pt)++; 
    *pt=*pt+1;
    cout<<*pt<<endl;
    cout<<pt<<endl;
    pt+=1;  //next value pr chlajayega 
    cout<<pt<<endl;
    return 0;
}