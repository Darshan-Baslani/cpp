#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node *next;
  Node *prev;

  Node() {}
  Node(int value) : val(value), prev(NULL) {}
};

void display(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertion_at_tail(Node *head, int value) {
  Node *new_node = new Node(value);
  new_node->next = NULL;
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  new_node->prev = temp;
  temp->next = new_node;
}

int main() {
  Node *head = new Node(10);
  insertion_at_tail(head, 11);
  insertion_at_tail(head, 12);
  insertion_at_tail(head, 13);
  insertion_at_tail(head, 14);
  insertion_at_tail(head, 15);
  display(head);

  return 0;
}
