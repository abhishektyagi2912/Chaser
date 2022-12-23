#include <iostream>
using namespace std;

int main()
{
    char s[10];
    cin>>s;

    int ans=0;
    int i=0;
    while (s[i] !='\0')
    {
        ans++;
        i++;
    }
    
    cout<<ans;

    return 0;
}