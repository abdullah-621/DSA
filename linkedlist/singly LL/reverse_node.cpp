#include <iostream>
#include <vector>
using namespace std;

struct Node
{
public:
  int data;
  Node *next;

public:
  Node(int value)
  {
    data = value;
    next = nullptr;
  }
};
Node *creat_linked_list(int arr[], int index, int size)
{

  // todo : base case
  if (index == size)
  {
    return nullptr;
  }
  Node *temp = new Node(arr[index]);

  temp->next = creat_linked_list(arr, index + 1, size);
  return temp;
}
void print_LL(Node *head)
{
  Node *current = head;

  while (current != nullptr)
  {
    cout << current->data << " = " << current->next << endl;
    current = current->next;
  }
}

int main()
{
  Node *head = nullptr;

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  head = creat_linked_list(arr, 0, 10);

  // reverse
  Node *pre, *curr, *fut;
  pre = nullptr;
  curr = head;
  fut = head;

  while (curr != nullptr)
  {
    fut = curr->next;
    curr->next = pre;
    pre = curr;
    curr = fut;
  }
  head = pre;

  print_LL(head);

  return 0;
}