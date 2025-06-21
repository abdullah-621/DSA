#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
  queue<int> q;
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);

  int size = q.size();

  int n = 3;
  stack<int> S;

  while (n--)
  {
    S.push(q.front());
    q.pop();
  }

  while (!S.empty())
  {
    q.push(S.top());
    S.pop();
  }

  int m = q.size() - 3;

  while (m--)
  {
    q.push(q.front());
    q.pop();
  }

  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }

  return 0;
}