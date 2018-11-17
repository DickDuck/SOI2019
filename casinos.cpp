#include "soi.h"

    vector<vector<int>> read(int n, int m)
    {
        vector<vector<int>> g(n);
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        return g;
    }

vector<vector<int>> graph;
vector<bool> visited;
vector<int> jackpot;
int bigjack = 0;
int c = 0;
void dfs(int v)
{
    if (visited[v])
    {
        return;
    }
    visited[v] = true;
    if (jackpot[v] >= bigjack)
    {
        bigjack = jackpot[v];
    }
    for (int w : graph[v])
    {
      dfs(w);
    }

}


void main()
{
    int n, m;
    cin >> n >> m;
    //input jackpot
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        jackpot.push_back(a);
    }
   graph = read(n, m);
   visited.assign(n, false);
   int counter = 0;

   //============================
   for (int i = 0; i < visited.size(); i++)
   {
       if (visited[i] == false)
       {
        bigjack = 0;
        dfs(i);
        c++;
        counter += bigjack;


       }

   }

   cout << counter;
   bigjack = 0;
   c = 0;
   graph.clear();
   visited.clear();
   jackpot.clear();
}