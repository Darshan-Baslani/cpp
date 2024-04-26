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

void insertion_at_head(Node *head, int value) {
  Node *new_node = new Node(value);
  new_node->next = head;
  head = new_node;
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
  display(head);
  return 0;
}
