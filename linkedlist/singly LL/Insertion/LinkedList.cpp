#include <iostream>
#include <string>
using namespace std;
// Define the structure of a node
struct Node
{
  int id;      // Integer value
  float value; // Float value
  char label1; // Character value (e.g., R, A)
  char label2; // Character value (e.g., P, L)
  int number;  // Integer value
  Node *next;  // Pointer to the next node
  // Constructor to initialize a node
  Node(int id, float value, char label1, char label2, int number)
  {
    this->id = id;
    this->value = value;
    this->label1 = label1;
    this->label2 = label2;
    this->number = number;
    this->next = nullptr;
  }
};
// Function to print the linked list
void printList(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << "[ " << temp->id << ", " << temp->value << ", " << temp->label1 << ", "
         << temp->label2 << ", " << temp->number << " ] -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
// Function to update specific values in the linked list
void updateNode(Node *head, char oldLabel, char newLabel, int oldNumber, int newNumber)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    if (temp->label2 == oldLabel)
    {
      temp->label2 = newLabel;
    }
    if (temp->number == oldNumber)
    {
      temp->number = newNumber;
    }
    temp = temp->next;
  }
}
int main()
{
  // Create nodes
  Node *node1 = new Node(12, 3.90, 'R', 'P', 241);
  Node *node2 = new Node(21, 4.00, 'A', 'L', 145);
  // Link nodes
  node1->next = node2;
  // Print the original list
  cout << "Original Linked List:" << endl;
  printList(node1);
  // Update values: Change 'P' to 'Q' and 241 to 243
  updateNode(node1, 'P', 'Q', 241, 243);
  // Print the updated list
  cout << "\nUpdated Linked List:" << endl;
  printList(node1);
  // Clean up memory
  delete node1;
  delete node2;
  return 0;
}