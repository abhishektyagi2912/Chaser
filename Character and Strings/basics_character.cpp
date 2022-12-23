#include <iostream>
using namespace std;

int main()
{
    char ch[10];
    cin>>ch;

    ch[2]='\0';  //give second element an null so print 
    cout<<ch;
    return 0;
}