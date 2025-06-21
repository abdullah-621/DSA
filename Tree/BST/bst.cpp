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

// time complxity

// Insertion => O(h)
// Total Creation => O(n^2)

// sapce complxity => O(n) beacuse recursion useing stack . O(h) hote pare but Worst case a O(n) hbe

Node *Binary_tree(Node *root, int value)
{
  if (root == nullptr)
  {
    Node *temp = new Node(value);
    return temp;
  }

  if (value < root->data)
  {
    root->left = Binary_tree(root->left, value);
  }
  else
  {
    root->right = Binary_tree(root->right, value);
  }

  return root;
}
void InOrder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }

  InOrder(root->left);
  cout << root->data << " ";
  InOrder(root->right);
}
bool search(Node *root, int key)
{
  if (root == nullptr)
  {
    return 0;
  }

  if (key == root->data)
  {
    return 1;
  }
  else if (key < root->data)
  {
    bool flag = search(root->left, key);
    return flag;
  }
  else
  {
    bool flag = search(root->right, key);
    return flag;
  }

  return 0;
}
Node *Delete(Node *root, int del)
{
  if (root == nullptr)  // Not Found
  {
    cout << "Not Found" << endl;
    return nullptr;
  }
  if (del < root->data)
  {
    root->left = Delete(root->left, del);
  }
  else if (del > root->data)
  {
    root->right = Delete(root->right, del);
  }

  else
  {
    // leaf Node Delete
    if (root->right == nullptr && root->left == nullptr)
    {
      cout << "Found " << del << " and delete" << endl;
      delete root;
      return nullptr;
    }

    // Only right child exist
    else if (root->left == nullptr && root->right != nullptr)
    {
      cout << "Found " << del << " and delete" << endl;
      Node *temp = root->right;
      delete root;
      return temp;
    }
    // Only left child exist
    else if (root->left != nullptr && root->right == nullptr)
    {
      cout << "Found " << del << " and delete" << endl;
      Node *temp = root->left;
      delete root;
      return temp;
    }
    // 2 child exist
    // InOrder Predecessor

    else  
    {
      Node *child = root->left;
      Node *parent = child;

      while (child->right != nullptr)
      {
        parent = child;
        child = child->right;
      }

      if (parent != child)
      {
        cout << "Found " << del << " and delete" << endl;
        parent->right = child->left;
        child->left = root->left;
        child->right = root->right;
        delete root;
        return child;
      }
      else
      {
        cout << "Found " << del << " and delete" << endl;
        child->right = root->right;
        delete root;
        return child;
      }
    }
  }

  return root;
}
int main()
{

  int arr[] = {10, 1, 2, 55, 64, 78, 70, 3, 9, 0, 25};

  Node *root = nullptr;

  for (int i = 0; i < 10; i++)
  {
    root = Binary_tree(root, arr[i]);
  }

  InOrder(root);

  cout << endl;

  int key;
  cout << "Enter key for search : ";
  cin >> key;

  int find = (search(root, key));

  cout << (find ? "Found" : "Not Found") << endl;

  int del;
  cout << "Enter key for delete : ";
  cin >> del;

  root = Delete(root, del);

  InOrder(root);

  return 0;
}
