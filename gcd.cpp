// if(L==0) return R;
//         if(R==0) return L;
//         if(L==R) return L;
//         if(L>R) return solve(L-R,R);
//         return solve(L,R-L);
#include<bits/stdc++.h>

using namespace std;

int main(){
    string tag;
    cin>>tag;
    int a,b,c,d;
    if(tag[2]=='A'||tag[2]=='E'||tag[2]=='I'||tag[2]=='O'||tag[2] =='U'||tag[2]=='Y')
        cout<<"invalid";
    a=tag[0]+tag[1];
    b=tag[3]+tag[4];
    c=tag[4]+tag[5];
    d=tag[7]+tag[8];
    if(a%2!=0 || b%2!=0 || c%2!=0 || d%2!=0) cout<<"invalid";
         
    cout<<"valid";
	return 0;
}
