#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node *next;
  Node(int value) {
    val = value;
    next = NULL;
  }
};

void insertion_at_head(Node *&head, int value) {
  Node *new_node = new Node(value);
  new_node->next = head;
  head = new_node;
}

void insertion_at_tail(Node *head, int value) {
  Node *new_node = new Node(value);
  new_node->next = NULL;
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = new_node;
}

void insertion_at_k(Node *&head, int k, int value) {
  if (k == 0) {
    insertion_at_head(head, value);
    return;
  }
  Node *new_node = new Node(value);
  Node *temp = head;
  for (int i = 0; i < k - 1; i++) {
    temp = temp->next;
  }
  new_node->next = temp->next;
  temp->next = new_node;
}

void update_at_k(Node *head, int k, int value) {
  Node *temp = head;
  for (int i = 0; i < k - 1; i++) {
    temp = temp->next;
  }
  temp->val = value;
}

void delete_at_head(Node *&head) { head = head->next; }

void delete_at_tail(Node *&head) {
  Node *temp = head;
  while (temp->next->next != NULL) {
    temp = temp->next;
  }
  temp->next = NULL;
}

void delete_at_k(Node *head, int k) {
  if (k == 0)
    delete_at_head(head);
  Node *temp = head;
  for (int i = 0; i < k - 2; i++) {
    temp = temp->next;
  }
  Node *temp2 = temp;
  temp = temp->next;
  temp2->next = temp->next;
}

void display(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Node *head = new Node(10);
  insertion_at_head(head, 9);
  insertion_at_head(head, 7);
  insertion_at_head(head, 6);
  insertion_at_tail(head, 11);
  insertion_at_k(head, 3, 13);
  display(head);

  update_at_k(head, 3, 8);
  display(head);

  delete_at_head(head);
  display(head);
  delete_at_tail(head);
  display(head);
  delete_at_k(head, 1);

  display(head);
  return 0;
}
