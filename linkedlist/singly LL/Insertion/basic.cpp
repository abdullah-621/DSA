// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//  public:
//    int data;
//    Node *next;

//    // todo : Constructor to initialize the node with data
//    public :
//    Node(int value){

//      this->data = value;
//      this->next = nullptr;

//     //  data = value;
//     //  next = nullptr;
//    }
// };

// int main()
// {
//   //todo : This is static away
//   // Node al;
//   // al.data = 4;
//   // al.data = 8;
//   // al.data = 8;

//   // todo : This is dainamically away

//   Node *head = new Node(5);

//   // todo : there is no need to apply this method when using constractors
//   // head->data = 4;
//   // head->next = nullptr;

//   // todo : add value into start (Insertion)
//  // todo : if linked list is present priveously

//   Node *temp = new Node(28);
//   temp->next = head;
//   head = temp;

//   // todo : if linked is empty
//   if(head == nullptr){
//     head = new Node(30);
//   }

//   cout << head->data << endl;
//   cout << head->next;

//   return 0;
// }

// todo: ===============================  Add node first ==========================

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

void Insert_middle(Node *head)
{

  Node *slow = head;
  Node *first = head;

  while (first != nullptr && first->next != nullptr)
  {
    first = first->next->next;
    slow = slow->next;
  }

  Node *temp = new Node(100);

  temp->next = slow->next;
  slow->next = temp;
}

void Delete_max(Node *head)
{

  int max_value = head->data;
  Node *max = nullptr;
  Node *pre = head;
  Node *temp = head->next;

  while (temp != nullptr)
  {
    if (temp->data > max_value)
    {
      max_value = temp->data;
      max = temp;
      pre = pre->next;
    }
    temp = temp->next;
  }

  pre->next = max->next;
  delete max;
}

int main()
{

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // queue<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  Node *head;
  head = nullptr;

  for (int i = 0; i < 10; i++)
  {
    if (head == nullptr)
    {
      head = new Node(arr[i]);
    }
    else
    {
      Node *temp = new Node(arr[i]);
      temp->next = head;
      head = temp;
    }
  }

  Insert_middle(head);
  Delete_max(head);

  Node *prt = head;

  while (prt != nullptr)
  {
    cout << prt->data << " ";
    prt = prt->next;
  }
  cout << endl;

  int count = 0;
  Node *current = head;
  while (current != nullptr)
  {
    count++;
    current = current->next;
  }
  cout << count << endl;

  return 0;
}