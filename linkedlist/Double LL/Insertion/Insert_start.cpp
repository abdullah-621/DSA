// #include <iostream>
// using namespace std;
// struct Node
// {
//   int data;
//   Node *prev;
//   Node *next;
//   Node(int value)
//   {
//     data = value;
//     prev = nullptr;
//     next = nullptr;
//   }
// };

// int main()
// {
//   Node *head = nullptr;

//   if (head == nullptr)
//   {
//     head = new Node(5);
//   }
//   else
//   {
//     Node *temp = new Node(10);
//     temp->next = head;
//     head->prev = temp;
//     head = temp;
//   }
//   cout << head->next->data;

//   return 0;
// }
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
  for (int i = 0; i < arr.size(); i++)
  {
    if (head == nullptr)
    {
      head = new Node(arr[i]);
    }
    else
    {
      // Node *temp = new Node(arr[i]);
      // temp->next = head;
      // head->prev = temp;
      // head = temp;
      head->prev = new Node(arr[i]);
      head->prev->next = head;
      head = head->prev;
    }
  }

  Node *temp = head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  

  return 0;
}