#include <iostream>
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

int main()
{
  Node *head = nullptr;

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  head = creat_linked_list(arr, 0, 10);

  Node *current = head;

  while (current != nullptr)
  {
    cout << current->data << " ";
    current = current->next;
  }
  
  return 0;
}