#include <iostream>
using namespace std;
int powerof1s(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);  //set n -> value and value-1 bits and see in how many counts the value comes to zero
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int ans = powerof1s(n);
    cout << ans;
    return 0;
}