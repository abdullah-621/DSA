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


int size = 0; // using Global pointer
void tree_size(Node *root){

  if (root == nullptr)
  {
    return;
  }
  tree_size(root->left);
  tree_size(root->right);
  size++;

}

// using return type

int getSize(Node *node)
{
  if (node == nullptr)
    return 0;
  return 1 + getSize(node->left) + getSize(node->right);
}

int main()
{

  cout << "Enter Root Node : ";

  Node *root = Binary_tree();

  tree_size(root);
  cout << "size is : " << size << endl;

  int SIZE = getSize(root);
  cout << "size is : " << SIZE << endl;

  return 0;
}