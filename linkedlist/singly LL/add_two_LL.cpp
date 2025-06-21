#include <iostream>
#include <stack>
#include <vector>
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
Node *creat_linked_list(vector<int> arr, int index, int size)
{

  // todo : base case
  if (index == size)
  {
    return nullptr;
  }
  Node *temp = new Node(arr[index]);

  temp->next = creat_linked_list(arr, index + 1, size);
  return temp;
}
void print_LL(Node *head)
{
  Node *current = head;

  while (current != nullptr)
  {
    cout << current->data << " ";
    current = current->next;
  }
}
Node *reverse_LL(Node *prev, Node *curr)
{
  if (curr == nullptr)
  {
    // curr = prev;
    // return curr;
    return prev;
  }
  Node *fut = curr->next;
  curr->next = prev;

  return reverse_LL(curr, fut);
}
int sum_LL(Node *head)
{
  if (head == nullptr)
  {
    return 0;
  }
  Node *temp = head;
  int sum = 0;
  while (temp != nullptr)
  {
    sum += temp->data;
    temp = temp->next;
  }
  return sum;
}
void free_LL(Node *head)
{
  while (head != nullptr)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
  }
}

int main()
{
  Node *head1 = nullptr;
  Node *head2 = nullptr;

  vector<int> arr = {2, 4, 3};
  vector<int> brr = {5, 6, 4};
  head1 = creat_linked_list(arr, 0, 3);
  head2 = creat_linked_list(brr, 0, 3);

  stack<int> ST_arr;
  stack<int> ST_brr;

  Node *temp1 = head1;
  Node *temp2 = head2;

  while (temp1 != nullptr)
  {
    ST_arr.push(temp1->data);
    temp1 = temp1->next;
  }
  while (temp2 != nullptr)
  {
    ST_brr.push(temp2->data);
    temp2 = temp2->next;
  }
  int sum1 = 0;
  int sum2 = 0;
  while (!ST_brr.empty() && !ST_brr.empty())
  {
    sum1 = sum1 * 10 + ST_arr.top();
    sum2 = sum2 * 10 + ST_brr.top();
    ST_arr.pop();
    ST_brr.pop();
  }
  int result = sum1 + sum2;

  vector<int> ans;
  while (result)
  {
    ans.push_back(result % 10);
    result /= 10;
  }
  Node *head3 = nullptr;
  head3 = creat_linked_list(ans, 0, ans.size());
  print_LL(head3);

  return 0;
}