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

struct queue
{
  Node *front;
  Node *rear;

  queue()
  {
    front = nullptr;
    rear = nullptr;
  }

  bool isEmpty()
  {
    return front == nullptr;
  }

  void push(int x)
  {
    if (isEmpty())
    {
      cout << "Pushed " << x << " into the queue." << endl;
      front = new Node(x);
      rear = front;
    }
    else
    {
      cout << "Pushed " << x << " into the queue." << endl;
      rear->next = new Node(x);
      if (rear->next == nullptr)
      {
        cout << "queue is Overflow" << endl;
        return;
      }
      
      rear = rear->next;
    }
  }

  void pop()
  {
    if (isEmpty())
    {
      cout << "Queue is Underflow" << endl;
      return;
    }
    else
    {
      cout << "Poped " << front->data << " into the queue." << endl;
      Node *temp = front;
      front = front->next;
      delete temp;
    }
  }

  void start()
  {
    if (isEmpty())
    {
      cout << "Queue is empty" << endl;
      // return -1;
    }
    else
    {

      cout << "Starting value is : " << front->data << endl;
      // return front->data;
    }
  }
};

int main()
{

  queue q;
  q.push(5);
  q.push(6);
  q.push(7);
  q.pop();
  q.start();
  cout << q.isEmpty();

  return 0;
}