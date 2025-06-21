#include <iostream>
#include <vector>
#include <stack>
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
Node *reverse_DLL(Node *head)
{
  // stack<int> DLL;
  // Node *temp = head;
  // while (temp)
  // {
  //   DLL.push(temp->data);
  //   temp = temp->next;
  // }
  // temp = head;
  // while (!DLL.empty())
  // {
  //   temp->data = DLL.top();
  //   DLL.pop();
  //   temp = temp->next;
  // }
  // return head;

  Node *curr = head;
  Node *temp = nullptr;

  while (curr)
  {
    temp = curr->prev;
    curr->prev = curr->next;
    curr->next = temp;
    head = curr;
    curr = curr->prev;
  }
  return head;
}
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

  head = reverse_DLL(head);
  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }

  return 0;
}