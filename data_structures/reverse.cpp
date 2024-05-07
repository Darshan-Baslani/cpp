#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node *next;
  Node() {}
  Node(int value) { val = value; }
};

void insert_at_tail(Node *head, int value) {
  Node *new_node = new Node(value);
  if (head == NULL) {
    head = new_node;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = new_node;
  new_node->next = NULL;
}

void display(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->val << " -> ";
    temp = temp->next;
  }
  cout << endl;
}

void reverse_list(Node *head) {

}

int main() {
  Node *head = new Node(11);
  insert_at_tail(head, 11);
  insert_at_tail(head, 11);
  insert_at_tail(head, 44);
  insert_at_tail(head, 55);
  insert_at_tail(head, 66);
  insert_at_tail(head, 66);
  insert_at_tail(head, 88);
  insert_at_tail(head, 99);

  display(head);

  remove_duplicates(head);

  display(head);

  return 0;
}
