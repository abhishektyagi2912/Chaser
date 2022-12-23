#include <iostream>
using namespace std;

// in this we find a bit in givin position
int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);  //left shift operator
}
int main()
{
    cout << getbit(5, 2) << endl;

    return 0;
}