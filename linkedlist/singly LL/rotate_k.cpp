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
  Node(int value)
  {
    data = value;
    next = nullptr;
  }
};

int main()
{

  // todo: ===============================  Add node last ==========================

  int brr[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  Node *head = nullptr;
  Node *Tail = nullptr;

  // todo : when value is not present

  for (int i = 0; i < 10; i++)
  {
    // todo : when linked list is empty
    if (head == nullptr)
    {
      head = new Node(brr[i]);
      Tail = head;
    }
    // todo : insert value
    else
    {
      Tail->next = new Node(brr[i]);
      Tail = Tail->next;
    }
  }

  Node *current = head;
  while (current != nullptr)
  {
    cout << current->data << " ";
    current = current->next;
  }

    return 0;
}