// #include <iostream>
// #include <vector>
// using namespace std;

// class stack
// {
// public:
//   int *arr;
//   int size;
//   int top;
//   bool flag;

// public:
//   stack(int S)
//   {
//     size = S;
//     top = -1;
//     arr = new int[S];
//     flag = 1;
//   }

//   // push operation
//   void push(int value)
//   {
//     if (top == size - 1)
//     {
//       cout << "stack overflow" << endl;
//       return;
//     }
//     else
//     {
//       top++;
//       arr[top] = value;
//       cout << "pushed " << value << " into the stack" << endl;
//       flag = 0;
//     }
//   }
//   // pop operation

//   void pop()
//   {
//     if (top == -1)
//     {
//       cout << "stack underflow" << endl;
//     }
//     else
//     {
//       cout << "poped " << arr[top] << " into stack" << endl;
//       top--;
//       if (top == -1)
//       {
//         flag = 1;
//       }
//     }
//   }
//   // top operation

//   int peek()
//   {
//     if (top == -1)
//     {
//       cout << "The stack is empty" << endl;
//       return -1;
//     }
//     else
//     {
//       return arr[top];
//     }
//   }
//   // empty operation

//   bool empty()
//   {
//     return top == -1;
//   }

//   // Size Operation

//   int ISsize()
//   {
//     return top + 1;
//   }
// };

// int main()
// {
//   vector<int> vec = {10, 12, 13, 14, 15, 16, 17};

//   stack S(5);
//   // S.push(-1);
//   int value = S.peek();
//   if (S.flag == 0){
//     cout << value << endl;
//   }

//   return 0;
// }

#include <iostream>
using namespace std;
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
      cout << "Pop " << arr[top] << " into the stack" << endl;
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

int main()
{

  int arr[7] = {1, 2, 3, 4, 5, 6, 7};

  stack s(7);

  for (int i = 0; i < sizeof(arr) / sizeof(1); i++)
  {
    s.push(arr[i]);
  }

  return 0;
}

// struct stack
// {
// public:
//   int *arr;
//   int size;
//   int top;

// public:
//   stack(int s)
//   {
//     size = s;
//     top = -1;
//     arr = new int[s];
//   }

//   void push(int value)
//   {

//     if (top == size - 1)
//     {
//       cout << "Stack Overlfow" << endl;
//     }
//     else
//     {
//       top++;
//       arr[top] = value;
//       cout << "Pushed " << value << " into ths stack" << endl;
//     }
//   }

//   void pop()
//   {
//     if (top == -1)
//     {
//       top--;
//       cout << "Pop " << arr[top] << " into ths stack" << endl;
//     }
//     else
//     {
//       cout << "Stack Underflow" << endl;
//     }
//   }

//   int pick()
//   {

//     if (top == -1)
//     {
//       cout << "Stack Underflow";
//       return -1;
//     }
//     else
//     {
//       return arr[top];
//     }
//   }

//   bool isEmpty()
//   {
//     return top == -1;
//   }

//   int isSize()
//   {
//     return top + 1;
//   }
// };
