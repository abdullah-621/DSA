#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
public:
  int data;
  Node *next;

public:
  Node(int value){
    data = value;
    next = nullptr;
  }
};


void SwapValue(Node *head){
  Node *min_node = nullptr;
  Node *max_node = nullptr;
  Node *temp = head;
  int min_value = INT16_MAX;
  int max_value = INT16_MIN;


  while (temp != nullptr)
  {
    if (temp->data < min_value)
    {
      min_value = temp->data;
      min_node = temp;
    }
    temp = temp->next;
  }

  temp = head;

  while (temp != nullptr)
  {
    if (temp->data > max_value)
    {
      max_value = temp->data;
      max_node = temp;
    }
    temp = temp->next;
  }
  swap(min_node->data, max_node->data);
}

int main()
{

  // todo: ===============================  Add node first ==========================

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  Node *head;
  head = nullptr;

  for (int i = 0; i < 10; i++)
  {
    if (head == nullptr)
    {
      head = new Node(arr[i]);
    }
    else{
      Node *temp = new Node(arr[i]);
      temp->next = head;
      head = temp;
    }
  }
  SwapValue(head);

  Node *current = head;
  while (current != nullptr)
  {
    cout << current->data << endl;
    current = current->next;
  }

  return 0;
}