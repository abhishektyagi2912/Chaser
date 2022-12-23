#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(5,1);   //array a of size 5 and all element are 1
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> v;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    v.push_back(1);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;   ///kitne element pde hue h

    v.push_back(2);
    cout<<v.capacity()<<endl;  //size of an array
    cout<<v.size()<<endl;

    a.pop_back();
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<a.front()<<endl;  //front element 
    cout<<a.back()<<endl;   //last element


    return 0;
}