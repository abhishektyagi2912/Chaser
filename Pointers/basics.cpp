#include <iostream>
using namespace std;

int main()
{
    // int *p; //Wild pointers     //this is wrong because it point to some garbage value
    int num=5;

    cout<<num<<endl;

    // address of operator -> &
    cout<<&num<<endl;
    int *ptr=&num;
    cout<<ptr<<endl;   //num  ka address print ho jayega 
    cout<<*ptr<<endl;

    double d=4.22;
    double *p = &d;
    cout<<p<<endl;   //num  ka address print ho jayega 
    cout<<*p<<endl;

    cout<<"size of integer "<<sizeof(num)<<endl;
    cout<<"size of pointer "<<sizeof(ptr)<<endl;     //but generally ans is 8


    return 0;
}