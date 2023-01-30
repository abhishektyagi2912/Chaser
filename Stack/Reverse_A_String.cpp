#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str = "Abhishek";
    stack<char> s;

    for (auto i : str)
    {
        s.push(i);
    }

    string ans = "";

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    cout << ans << endl;

    return 0;
}