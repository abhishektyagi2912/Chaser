#include <iostream>
using namespace std;

void update(int & n)  //refrence variable is n if is the address of i 
{
    n++;
}

int main()
{
    int i = 5;
    cout << "Before update " << i << endl;
    update(i);
    cout << "After update " << i << endl; 

    return 0;
}