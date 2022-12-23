///Floyds triangle 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            //cout<<"*"<<" ";
            //cout<<j<<" ";
            //cout<<i<<" ";
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}