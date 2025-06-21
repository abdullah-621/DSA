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
    cout << current->data << " ";
    current = current->next;
  }
}

int main()
{
  Node *head = nullptr;

  int arr[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
  head = creat_linked_list(arr, 0, 9);

  Node *temp = head;
  int n = 0;

  while (temp != nullptr)
  {
    n++;
    temp = temp->next;
  }
  n /= 2;
  Node *curr = head;
  Node *pre = nullptr;

  while (n--)
  {
    pre = curr;
    curr = curr->next;
  }
  pre->next = nullptr;

  Node *pre_2 = nullptr;
  Node *fut = nullptr;
  while (curr)
  {
    fut = curr->next;
    curr->next = pre_2;
    pre_2 = curr;
    curr = fut;
  }
  

  print_LL(head);

  return 0;
}