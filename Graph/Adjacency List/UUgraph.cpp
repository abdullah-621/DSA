#include <iostream>
#include <vector>
using namespace std;

// todo : Undirected Unweight graph

int main()
{
  int vertex, edges;
  cout << "Enter vertex and edges : ";
  cin >> vertex >> edges;

  vector<int> Adjlist[vertex];

  int u, v;

  for (int i = 0; i < vertex; i++)
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

  return 0;
}