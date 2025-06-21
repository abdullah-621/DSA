#include <iostream>
#include <vector>
using namespace std;
struct Node
{
  int data;
  Node *prev;
  Node *next;
  Node(int value)
  {
    data = value;
    prev = nullptr;
    next = nullptr;
  }
};

Node *deleteNode(Node *head, int target)
{
  // detete first node
  while (head->data == target)
  {
    head = head->next;
  }

  Node *curr = head;

  while (curr != nullptr)
  {
    if (curr->data == target)
    {
      curr->prev->next = curr->next;
    }

    // if (curr->next != nullptr)
    // {
    //   /* code */
    //   curr = curr->next;
    // }
    curr = curr->next;
    }

  return head;
}

int main()
{
  vector<int> arr = {2, 2, 3, 2, 5, 6, 7, 2, 2};

  Node *head = nullptr;
  Node *tail = nullptr;
  for (int i = 0; i < arr.size(); i++)
  {
    if (head == nullptr)
    {
      head = new Node(arr[i]);
      tail = head;
    }
    else
    {
      Node *temp = new Node(arr[i]);
      tail->next = temp;
      temp->prev = tail;
      tail = tail->next;
    }
  }
  head = deleteNode(head, 2);
  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }

  return 0;
}