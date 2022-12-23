#include <iostream>
using namespace std;
void reverse(char ch[],int n ){
    int s=0,e=n-1;
    while (s<e)
    {
        swap(ch[s++],ch[e--]);
    }
}
int getLength(char ch[]){
    int ans=0;
    int i=0;
    while (ch[i] !='\0')
    {
        ans++;
        i++;
    }
    return ans;
}

int main()
{
    char ch[10];
    cin>>ch;
    int n = getLength(ch);  //count length of string 
    reverse(ch,n);
    
    cout<<ch;
    return 0;
}