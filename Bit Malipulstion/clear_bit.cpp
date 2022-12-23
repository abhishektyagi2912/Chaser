#include <iostream>
using namespace std;

int clearbit(int n, int pos)
{
    int clear = ~(1 << pos);
    return (n & clear);
}

int main()
{
    cout << clearbit(5, 2) << endl;

    return 0;
}