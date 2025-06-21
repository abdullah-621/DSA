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

int middle_LL(Node *head){
  Node *slow = head, *First = head;

  while (First != nullptr && First->next != nullptr)
  {
    slow = slow->next;
    cout << "slow : " << slow->data << endl;
    First = First->next->next;
    cout << "first : " << First->data << endl;
  }
  return slow->data;
}

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
  int middle = middle_LL(head);
  cout << middle << endl;

  return 0;
}