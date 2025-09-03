#include <iostream>
#include <vector>
using namespace std;

// Adjacency matrix
// Undirected Unweighted graph
// Undirected weighted graph
// Directed Unweighted graph
// Directed weighted graph

// time complixity = O(v*v)
// space complixity = O(v*v)

int main()
{
  int vertex, edge;
  cout << "Enter vertex and eadge : ";
  cin >> vertex >> edge;

  vector<vector<bool>> Adjmtx(vertex, vector<bool>(vertex, 0));

  int u, v , weight;

  for (int i = 0; i < edge; i++)
  {
    cin >> u >> v >> weight;

    Adjmtx[u][v] = weight;
    Adjmtx[v][u] = weight;
  }

  for (int i = 0; i < vertex; i++)
  {
    for (int j = 0; j < vertex; j++)
    {
      cout << Adjmtx[i][j] << " ";
    }

    cout << endl;
  }

  return 0;
}