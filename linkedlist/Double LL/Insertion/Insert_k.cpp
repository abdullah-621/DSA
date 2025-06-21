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

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};

  Node *head = nullptr;
  for (int i = 0; i < arr.size(); i++)
  {
    if (head == nullptr)
    {
      head = new Node(arr[i]);
    }
    else
    {
      Node *curr = head;

      while (curr->next != nullptr)
      {
        curr = curr->next;
      }
      curr->next = new Node(arr[i]);
      curr->next->prev = curr;
      curr = curr->next;
    }
  }

  int n = 10;
  int p = 2;
  Node *curr = head;
  while (p--)
  {
    curr = curr->next;
  }
  Node *temp = new Node(n);
  temp->next = curr->next;
  temp->prev = curr;
  curr->next = temp;
  temp->next->prev = temp;

  // todo : delete first node

  Node *del_first = head;
  head = head->next;
  head->prev = nullptr;
  delete del_first;

  // todo : delete last node

  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }

  return 0;
}