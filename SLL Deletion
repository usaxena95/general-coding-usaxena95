#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
} *head = NULL;

void removeBeginning() {
  if (head == NULL)
    printf("\n\nList is Empty!!!");
  else {
    struct Node *temp = head;
    if (head->next == NULL) {
      head = NULL;
      free(temp);
    } else {
      head = temp->next;
      free(temp);
      printf("\nOne node deleted!!!\n\n");
    }
  }
}

void removeEnd() {
  if (head == NULL) {
    printf("\nList is Empty!!!\n");
  } else {
    struct Node *temp1 = head, *temp2;
    if (head->next == NULL)
      head = NULL;
    else {
      while (temp1->next != NULL) {
        temp2 = temp1;
        temp1 = temp1->next;
      }
      temp2->next = NULL;
    }
    free(temp1);
    printf("\nOne node deleted!!!\n\n");
  }
}

void removeSpecific(int delValue) {
  struct Node *temp1 = head, *temp2;
  while (temp1->data != delValue) {
    if (temp1->next == NULL) {
      printf("\nGiven node not found in the list!!!");
    }
    temp2 = temp1;
    temp1 = temp1->next;
  }
  temp2->next = temp1->next;
  free(temp1);
  printf("\nOne node deleted!!!\n\n");
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

  // removeBeginning();
  // removeEnd();

  removeSpecific(4);
  // removeEnd();
  // removeEnd();
  // removeEnd();
  // removeEnd();

  Node *p = head;
  while (p != NULL) {
    cout << (*p).data << " ";
    p = p->next;
  }
  cout << "\n";

  return 0;
}
