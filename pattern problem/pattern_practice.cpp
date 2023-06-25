#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if(i=0&&i==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}