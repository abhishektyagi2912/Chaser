#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    
    d.push_back(2);
    d.push_front(1);
    d.push_back(3);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<d.at(0)<<endl;
    
    return 0;
}