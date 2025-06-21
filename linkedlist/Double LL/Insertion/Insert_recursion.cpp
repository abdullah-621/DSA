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
Node *creat_DLL(vector<int> arr, int index, int size, Node *back)
{
  if (index == size)
  {
    return nullptr;
  }
  Node *temp = new Node(arr[index]);
  temp->prev = back;

  temp->next = creat_DLL(arr, index + 1, arr.size(), temp);
  return temp;
}
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};

  Node *head = nullptr;
  head = creat_DLL(arr, 0, arr.size(), nullptr);

  Node *temp = head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}