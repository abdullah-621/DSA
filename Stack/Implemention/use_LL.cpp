#include <iostream>
using namespace std;
struct Node
{
  int data;
  Node *next;

  Node(int value)
  {
    data = value;
    next = nullptr;
  }
};

struct Stack
{
  Node *top;

  Stack()
  {
    top = nullptr;
  }

  bool isEmpty()
  {
    return top == nullptr;
  }

  void push(int x)
  {
    if (isEmpty())
    {
      cout << "Pushed " << x << " into the stack." << endl;
      top = new Node(x);
    }
    else
    {
      cout << "Pushed " << x << " into the stack." << endl;
      Node *temp = new Node(x);
      temp->next = top;
      top = temp;
    }
  }

  void pop()
  {
    if (isEmpty())
    {
      cout << "Stack in Underflow" << endl;
      return;
    }
    else
    {
      cout << "Poped " << top->data << " from the stack" << endl;
      Node *temp = top;
      top = top->next;
      delete temp;
    }
  }

  void peek()
  {
    if (isEmpty())
    {
      cout << "Stack is Empty" << endl;
      return;
    }
    else
    {
      cout << "Peek value is : " << top->data << endl;
    }
  }
};

int main()
{
  Stack s;

  int arr[] = {1, 2, 3, 4, 5, 6};

  for (int i = 0; i < 6; i++)
  {
    s.push(arr[i]);
  }

  while (!s.isEmpty())
  {
     s.peek();
     s.pop();
  }

  return 0;
}