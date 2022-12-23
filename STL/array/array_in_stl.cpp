#include <iostream>
#include<array>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3}; // this is basic array that we define and we use this normally

    array<int, 4> a = {1, 2, 3, 4}; /// this is a static array so we don't use this array in cp  
    //array stl ki implimentation fixed size k static array s hoti h

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //if we need direct ans ki humko specific position par array chaiye 
    cout<<a.at(2)<<endl;;

    //check if array is empty or not

    cout<<a.empty()<<endl; // 0 to false ,1 to true
    cout<<a.front()<<endl; // first element found
    cout<<a.back()<<endl; // last element found
    


    return 0;
}