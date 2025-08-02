/*
1. Insert
2. hight update
3. Balance factor check
4. rotation
*/

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  int height;
  Node *left;
  Node *right;

  Node(int value)
  {
    data = value;
    height = 1;
    left = nullptr;
    right = nullptr;
  }
};
// Calculate height
int getheight(Node *root)
{
  if (!root)
    return 0;
  else
  {
    return root->height;
  }
}

// calculate Banlance
int getBalance(Node *root)
{
  return getheight(root->left) - getheight(root->right);
}

// right rotation
Node *rightRotation(Node *root)
{
  Node *child = root->left;
  Node *rightChild = child->right;
  child->right = root;
  root->left = rightChild;

  root->height = 1 + max(getheight(root->left), getheight(root->right));
  child->height = 1 + max(getheight(child->left), getheight(child->right));
  return child;
}
// left rotation
Node *leftRotation(Node *root)
{
  Node *child = root->right;
  Node *leftChild = child->left;
  child->left = root;
  root->right = leftChild;
  root->height = 1 + max(getheight(root->left), getheight(root->right));
  child->height = 1 + max(getheight(child->left), getheight(child->right));
  return child;
}

// insert
Node *Insertion(Node *root, int key)
{
  // root not exist
  if (!root)
  {
    return new Node(key);
  }
  // root exist

  if (key > root->data)
    root->right = Insertion(root->right, key);

  else if (key < root->data)
  {
    root->left = Insertion(root->left, key);
  }

  else
  {
    return root;
  }

  // update height
  root->height = 1 + max(getheight(root->left), getheight(root->right));

  // check balanc factor
  int balance = getBalance(root);

  // LL case
  if (balance > 1 && key < root->left->data)
  {
    return rightRotation(root);
  }
  // RR case
  else if (balance < -1 && key > root->right->data)
  {
    return leftRotation(root);
  }
  // LR case
  else if (balance > 1 && key > root->left->data)
  {
    root->left = leftRotation(root->left);
    return rightRotation(root);
  }
  // RL case
  else if (balance < -1 && key < root->right->data)
  {
    root->right = rightRotation(root->right);
    return leftRotation(root);
  }
  // No unbanancing
  else
  {
    return root;
  }
}
void Inorder(Node *root)
{
  if (!root)
  {
    return;
  }
  
  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}

int main()
{
  Node *root = nullptr;
  root = Insertion(root, 10);
  root = Insertion(root, 20);
  root = Insertion(root, 0);
  root = Insertion(root, 5);
  root = Insertion(root, 80);
  root = Insertion(root, 45);

  Inorder(root);

  return 0;
}