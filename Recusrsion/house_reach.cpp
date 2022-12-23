// number of steps to reach the house from one point to another
#include <iostream>
using namespace std;

void reached(int dest,int start){
    cout<<start<<" to home "<<dest<<endl;
    if(start==dest){
        cout<<"Reached ";
        return;
    }
    start++;
    reached(dest,start);
}

int main()
{
    int start=0;
    int dest=10;
    reached(dest,start);
    return 0;
}