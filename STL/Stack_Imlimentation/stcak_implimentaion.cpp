#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("My");
    s.push("name");
    s.push("Abhishek");
    s.push("Tyagi");
    // that element push last
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size();


    return 0;
}