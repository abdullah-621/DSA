#include <iostream>
using namespace std;
struct queue
{
  int *arr;
  int front;
  int rear;
  int size;

public:
  queue(int n)
  {
    arr = new int[n];
    front = -1;
    rear = -1;
    size = n;
  }

  bool is_empty()
  {
    return front == -1;
  }
  bool is_full()
  {
    // return rear == size - 1;
    return (rear + 1) % size == front;
  }

  void push(int x)
  {
    if (is_empty())
    {
      cout << "pushed " << x << " into the queue." << endl;
      rear = front = 0;
      arr[0] = x;
    }
    else if (is_full())
    {
      cout << "Queue Overflow." << endl;
      return;
    }
    else
    {
      cout << "pushed " << x << " into the queue." << endl;
      // rear++;
      rear = (rear + 1) % size;
      arr[rear] = x;
    }
  }

  void pop()
  {
    if (is_empty())
    {
      cout << "Queue is Underflow.";
      return;
    }
    else
    {
      if (front == rear)
      {
        front = rear = -1;
      }
      else
      {
        cout << "poped " << arr[front] << " into the queue." << endl;
        // front++;
        front = (front + 1) % size;
      }
    }
  }

  int start()
  {
    if (is_empty())
    {
      cout << "Queue is empty." << endl;
      return -1;
    }
    else
    {
      return arr[front];
    }
  }
};

struct stack
{
public:
  int *arr;
  int size;
  int top;

public:
  stack(int s)
  {
    size = s;
    top = -1;
    arr = new int[s];
  }

  void push(int value)
  {

    if (top == size - 1)
    {
      cout << "Stack Overlfow" << endl;
    }
    else
    {
      top++;
      arr[top] = value;
      cout << "Pushed " << value << " into ths stack" << endl;
    }
  }

  void pop()
  {
    if (top == -1)
    {
      cout << "Stack Underflow" << endl;
      return;
    }
    else
    {
      cout << "Pop " << arr[top] << " into ths stack" << endl;
      top--;
    }
  }

  int pick()
  {

    if (top == -1)
    {
      cout << "Stack Underflow";
      return -1;
    }
    else
    {
      return arr[top];
    }
  }

  bool isEmpty()
  {
    return top == -1;
  }

  int isSize()
  {
    return top + 1;
  }
};

void palindrom(queue &q, queue q1)
{
  stack s1(5);

  while (!q1.is_empty())
  {
    s1.push(q1.start());
    q1.pop();
  }

  bool flag = true;

  while (!s1.isEmpty())
  {
    if (s1.pick() != q.start())
    {
      flag = false;
      break;
    }
  }
  if (flag)
  {
    cout << "Palindrom";
  }
  else
  {
    cout << "Not palindrom";
  }
}

int main()
{
  queue q(5);
  stack st(5);

  q.push(2);
  q.push(11);
  q.push(12);
  q.push(11);

  q.push(2);
  // q.push(18);

  palindrom(q, q);

  // int x = q.start();
  // if (!q.is_empty())
  // {
  //   cout << x << endl;
  // }

  // cout << (q.is_full() ? "full" : "Not full") << endl;
  // cout << (q.is_empty() ? "empty" : "not empty") << endl;
  return 0;
}