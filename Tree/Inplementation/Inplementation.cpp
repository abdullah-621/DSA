#include <iostream>
#include <queue>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;

  Node(int value)
  {
    data = value;
    left = nullptr;
    right = nullptr;
  }
};

int main()
{

  queue<Node *> q;

  //=======>>>> Root Node value  <<<<=========
  int x;
  cout << "Enter Root Value : ";
  cin >> x;

  //=======>>>>> Creat Root Node <<<<<========
  Node *root = new Node(x);
  q.push(root);

  int left_value, right_value;

  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();

    cout << "Enter left Value of " << temp->data << " : ";
    cin >> left_value;

    if (left_value != -1)
    {
      temp->left = new Node(left_value);
      q.push(temp->left);
    }

    cout << "Enter Right Value of " << temp->data << " : ";
    cin >> right_value;

    if (right_value != -1)
    {
      temp->right = new Node(right_value);
      q.push(temp->right);
    }
  }

  return 0;
}