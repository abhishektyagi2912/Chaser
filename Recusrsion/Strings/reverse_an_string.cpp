#include <iostream>
using namespace std;

void reverse(string &s, int i, int e)
{
    cout << "Call for string " << s << endl;
    // base case
    if (i > e)
        return;
    // solve one

    swap(s[i], s[e]);
    i++;
    e--;
    reverse(s, i, e);
}

int main()
{
    string s = "abhishek";
    reverse(s, 0, s.length() - 1);
    cout << s;

    return 0;
}