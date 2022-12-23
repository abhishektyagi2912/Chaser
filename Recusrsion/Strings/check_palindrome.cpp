#include <iostream>
using namespace std;
bool checkPalindrome(string s, int i, int j) //here string are call by refrence besacue we only check true false
{
    if (i > j)
        return true;
    if (s[i] != s[j])
        return false;
    else
        checkPalindrome(s, ++i, --j);
}

int main()
{
    string s = "abhishek";
    bool ispalindrom = checkPalindrome(s, 0, s.length() - 1);
    if (ispalindrom)
        cout << "Valid" << endl;
    else
        cout << "Not valid" << endl;

    return 0;
}