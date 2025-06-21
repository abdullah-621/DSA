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

Node *Binary_tree()
{
  int x;
  cin >> x;

  if (x == -1)
  {
    return nullptr;
  }

  Node *temp = new Node(x);

  cout << "Enter the left child of " << x << " :";
  temp->left = Binary_tree();

  cout << "Enter the right child of " << x << " :";
  temp->right = Binary_tree();

  return temp;
}

// time complexity = O(n)
// Space complexity = O(h) / O(n) (Using Stack (Max Hight))

void preOrder(Node *root) // Root => left => Right
{

  if (root == nullptr)
  {
    return;
  }

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void InOrder(Node *root) // left => Root => Right
{
  if (root == nullptr)
  {
    return;
  }

  InOrder(root->left);
  cout << root->data << " ";
  InOrder(root->right);
}

void PostOrder(Node *root) // left => Right => Root
{
  if (root == nullptr)
  {
    return;
  }
  PostOrder(root->left);
  PostOrder(root->right);
  cout << root->data << " ";
}

void lebleOrder(Node *root) // lable => lable => lable
{

  if (root == nullptr)
  {
    return;
  }

  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    Node *current = q.front();
    q.pop();

    cout << current->data << " ";

    if (current->left != nullptr)
    {
      q.push(current->left);
    }

    if (current->right != nullptr)
    {
      q.push(current->right);
    }
  }
}

int main()
{

  cout << "Enter Root Node : ";

  Node *root = Binary_tree();

  cout << "PreOrder traversal : ";
  preOrder(root);

  cout << endl;

  cout << "InOrder traversal : ";
  InOrder(root);

  cout << endl;

  cout << "PostOrder traversal : ";
  PostOrder(root);

  cout << endl;

  cout << "LebleOrder traversal : ";
  lebleOrder(root);

  return 0;
}