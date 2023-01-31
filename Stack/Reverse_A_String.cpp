#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str = "Abhishek";
    stack<char> s;

    // acces the string words
    for (auto i : str)
    {
        s.push(i);
    }

    string ans = "";
    // create new string and push the words in the string till then stack is not empty
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    cout << ans << endl;

    return 0;
}