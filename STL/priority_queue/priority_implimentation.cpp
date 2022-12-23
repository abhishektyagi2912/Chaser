#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // fetch max element
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    cout << maxi.size() << endl; // no value because all value are pop

    mini.push(2);
    mini.push(3);
    mini.push(1);
    mini.push(5);
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    return 0;
}