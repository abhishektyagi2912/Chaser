#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("My");
    q.push("name");
    q.push("Abhishek");
    q.push("Tyagi");

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front();


    return 0;
}