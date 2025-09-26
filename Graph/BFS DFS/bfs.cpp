#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(queue<int> &q, vector<bool> &visited, vector<int> &ans, vector<vector<int>> &Adjlist)
{
  q.push(0);
  visited[0] = true;

  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    ans.push_back(node);

    for (int i = 0; i < Adjlist[node].size(); i++)
    {
      int naigbhore = Adjlist[node][i];
      if(!visited[naigbhore])
      {
        visited[naigbhore] = true;
        q.push(naigbhore);
      }
    }
  }
  
}

int main()
{
  int vertex, edges;
  cout << "Enter vertex and edges : ";
  cin >> vertex >> edges;

  vector<vector<int>> Adjlist[vertex];

  int u, v;

  for (int i = 0; i < edges; i++)
  {
    cin >> u >> v;
    Adjlist[u].push_back(v);
    Adjlist[v].push_back(u);
  }

  for (int i = 0; i < vertex; i++)
  {
    cout << i << " => ";
    for (int j = 0; j < Adjlist[i].size(); j++)
    {
      cout << Adjlist[i][j] << " ";
    }
    cout << endl;
  }

  queue<int> q;
  vector<bool> visited(vertex,false);
  vector<int> ans;

  BFS(q, visited, ans, Adjlist);

  for(auto i : ans)
  {
    cout << i << " ";
  }

  return 0;
}