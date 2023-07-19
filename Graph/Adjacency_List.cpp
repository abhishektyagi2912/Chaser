#include <bits/stdc++.h>
using namespace std;

class graph
{
    unordered_map<int, list<int>> adj;

public:
    void addedge(int u, int v, bool direction)
    {
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printlist()
    {
        for (auto x : adj)
        {
            cout << x.first << "->";
            for (auto y : x.second)
            {
                cout << y << ",";
            }
            cout << endl;
        }
        
    }
};

int main()
{
    // no. of nodes
    int n;
    cin >> n;
    // no. of edges
    int m;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addedge(u, v, 0);
    }
    g.printlist();

    return 0;
}