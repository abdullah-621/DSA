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
void print_DLL(Node *head)
{
  Node *curr = head;
  while (curr)
  {
    cout << curr->data << " ";
    curr = curr->next;
  }
}
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

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

  print_DLL(head);
  cout << endl;

  // todo : delete first node
  if (head->next == nullptr) // only one node exist
  {
    delete head;
    head = nullptr;
  }
  else // more then one node
  {
    Node *del_first = head;
    head = head->next;
    head->prev = nullptr;
    cout << "delete first node : " << del_first->data << endl;
    delete del_first;
  }

  print_DLL(head);
  cout << endl;

  // todo : delete last node
  if (head->next == nullptr) // only one node exist
  {
    delete head;
    head = nullptr;
  }
  else // more then one node exist
  {
    Node *del_last = head;
    while (del_last->next)
    {
      del_last = del_last->next;
    }
    cout << "delete last node : " << del_last->data << endl;
    del_last->prev->next = nullptr;
    delete del_last;
  }

  print_DLL(head);
  cout << endl;

  // todo : k th position

  int k = 1;
  if (k == 1) // delete first node
  {
    if (head->next == nullptr) // only one node exist
    {
      cout << "delete k th node : " << head->data << endl;
      delete head;
      head = nullptr;
    }
    else // more then one node
    {
      Node *del_first = head;
      head = head->next;
      head->prev = nullptr;
      cout << "delete k th node : " << del_first->data << endl;
      delete del_first;
    }
  }
  else // last or middle node
  {
    Node *del_k = head;
    while (k--)
    {
      del_k = del_k->next;
    }
    if (del_k->next == nullptr) // delete last node
    {
      cout << "delete k th node : " << del_k->data << endl;
      del_k->prev->next = nullptr;
      delete del_k;
    }
    else // delete any position
    {
      cout << "delete k th node : " << del_k->data << endl;
      del_k->next->prev = del_k->prev;
      del_k->prev->next = del_k->next;
      delete del_k;
    }
  }

  print_DLL(head);

  return 0;
}
