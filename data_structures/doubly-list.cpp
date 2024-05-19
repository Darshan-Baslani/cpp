#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node *next;
  Node *prev;

  Node(){} 
  Node(int value){
    val = value;
    prev = NULL;
    next = NULL;
  }
};

void display(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertion_at_prev(Node *&head, int value) {
  Node *new_node = new Node(value);
  if(head == NULL) {
    head = new_node;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  new_node->next = NULL;
  temp->next = new_node;
}

void insertion_at_head(Node *&head, int value) {
  Node *new_node = new Node(value);
  head->prev = new_node;
  new_node->next = head;
  head = new_node;
}

void insertion_at_k(Node *&head, int value, int k) {
  if(k == 0) {
    insertion_at_head(head, value);
    return;
  }
  Node *new_node = new Node(value);
  Node *temp = head;
  for(int i=0; i<=k; i++) {
    temp = temp->next;
  }
  new_node->prev = temp->prev;
  new_node->next = temp;
  temp->prev = new_node;
}

int main() {
  Node *head = NULL;
  insertion_at_prev(head, 11);
  insertion_at_prev(head, 12);
  insertion_at_prev(head, 13);
  insertion_at_prev(head, 14);
  insertion_at_prev(head, 15);
  insertion_at_head(head, 10);
  display(head);

  insertion_at_k(head, 20, 3);
  display(head);
  return 0;
}
