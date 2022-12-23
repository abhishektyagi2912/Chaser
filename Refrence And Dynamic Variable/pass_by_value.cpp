#include <iostream>
using namespace std;

void update(int n) //this n is copy so if we update this then no affect in main this is called pass by value 
{
    n++;
}

int main()
{
    int i = 5;
    cout << "Before update " << i << endl;
    update(i);
    cout << "After update " << i << endl; ///thier is no update 

    return 0;
}