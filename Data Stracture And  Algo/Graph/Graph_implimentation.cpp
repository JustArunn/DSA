#include <bits/stdc++.h>
using namespace std;
template <typename T>

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/

class graph
{
public:
    unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> drected graph

        // creating an edge from u to v
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printingList()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "Enter the number of Nodes " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of Edges " << endl;
    cin >> m;

    graph<int> g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // creating a undirected geaph
        g.addEdge(u, v, 0);
    }
    // printing graph
    g.printingList();
    /*

        INPUT FOR GRAPH

        5
        6
        0 1
        1 2
        2 3
        3 1
        3 4
        0 4

        OUTPUT FOR INPUT
        4-> 3, 0,
        0-> 1, 4,
        1-> 0, 2, 3,
        2-> 1, 3,
        3-> 2, 1, 4,

    */
    return 0;
}

