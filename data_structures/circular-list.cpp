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

void insertion_at_tail(Node *&head, int value) {
  Node *new_node = new Node(value);
  Node *temp = head;
  while (temp->next != head) {
    temp = temp->next;
  }
  temp->next = new_node;
  new_node->next = head;
}

void display(Node *head) {
  Node *temp = head;
  do{
    cout<<temp->val<<" ";
    temp = temp->next;
  }while(temp != head);
  cout << endl;
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
