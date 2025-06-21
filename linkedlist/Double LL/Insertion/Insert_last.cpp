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

  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }

  return 0;
}