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

int main()
{
  Node *head = nullptr;

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  head = creat_linked_list(arr, 0, 10);

  // reverse LL

  vector<int> linkedList;
  Node *temp = head;
  while (temp != nullptr)
  {
    linkedList.push_back(temp->data);
    temp = temp->next;
  }

  Node *push = head;
  for (int i = linkedList.size() - 1; i >= 0; i--)
  {
    push->data = linkedList[i];
    push = push->next;
  }

  for (auto i : linkedList)
  {
    cout << i << " ";
  }
  cout << endl;

  Node *current = head;

  while (current != nullptr)
  {
    cout << current->data << " ";
    current = current->next;
  }

  return 0;
}