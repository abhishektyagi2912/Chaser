#include <iostream>
using namespace std;
bool checkPalindrom(char ch[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        if(ch[s]!=ch[e]) return 0;
        else{
            s++;
            e--;
        }
    }
    return 1;
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
    
    cout<<ch<<endl;
    cout<<checkPalindrom(ch,n);
    return 0;
}