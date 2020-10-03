#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
} *head = NULL;

void insertAtBegin(int value) {
  Node *newNode = new Node();
  newNode->data = value;
  if (head == NULL) {
    newNode->next = NULL;
    head = newNode;
  }

  else {
    newNode->next = head;
    head = newNode;
  }
  printf("\nOne node inserted!!!\n");
}

void insertAtEnd(int value) {
  Node *newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;
  if (head == NULL)
    head = newNode;
  else {
    struct Node *temp = head;
    while (temp->next != NULL)
      temp = temp->next;
    temp->next = newNode;
  }
  printf("\nOne node inserted!!!\n");
}

void insertBetween(int value, int loc)

{

  Node *prev_ptr, *cur_ptr;

  Node *newNode = new Node();
  newNode->data = value;
  cur_ptr = head;
  if (head == NULL) {
    newNode->next = NULL;
    head = newNode;
  } else {
    for (int i = 1; i < loc; i++) {
      prev_ptr = cur_ptr;
      cur_ptr = cur_ptr->next;
    }
    prev_ptr->next = newNode;
    newNode->next = cur_ptr;
  }
  printf("\nOne node inserted!!!\n");
}

int main() {
  int n;
  cin >> n;
  head = NULL;
  Node *temp;

  while (n--) {

    Node *new_node = new Node();
    cin >> new_node->data;
    new_node->next = NULL;
    if (head == NULL) {
      head = temp = new_node;
    } else {
      temp->next = new_node;
      temp = new_node;
    }
  }
  int value;
  cin >> value;

  // insertAtBegin(40000);
  // insertBetween(value,4);
  insertAtEnd(value);

  Node *p = head;
  while (p != NULL) {
    cout << (*p).data << " ";
    p = p->next;
  }
  cout << "\n";

  return 0;
}
