#include <iostream>
using namespace std;

bool power(int n)
{
    return (n && !(n & (n - 1)));     ///n&(n-1)   does not zero in returning value ->  8 and 7 binary m last se 1st one swipe hojata h 
}

int main()
{
    cout<<power(4);
    return 0;
}