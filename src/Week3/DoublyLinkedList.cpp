// #include <iostream>

// using namespace std;

// class Node {
// public:
//   int data;
//   Node *next;
//   Node *prev;
// };

// class DoublyLinkedList {
// private:
//   Node *head;
//   Node *tail;

// public:
//   DoublyLinkedList() {
//     head = NULL;
//     tail = NULL;
//   }

//   bool isEmpty() { return head == NULL; }

//   int getNode(int index) {
//     if (index < 0) {
//       cout << "Invalid index" << endl;
//       return -1;
//     }
//     Node *temp = head;
//     for (int i = 0; i < index; i++) {
//       temp = temp->next;
//       if (temp == NULL) {
//         return -1;
//       }
//     }
//     return temp->data;
//   }

//   void editNode(int index, int data) {
//     if (index < 0) {
//       cout << "Invalid index" << endl;
//       return;
//     }
//     Node *temp = head;
//     for (int i = 0; i < index; i++) {
//       temp = temp->next;
//       if (temp == NULL) {
//         cout << "Invalid index" << endl;
//         return;
//       }
//     }
//     temp->data = data;
//   }

//   void removeNode(int index) {
//     if (index < 0) {
//       cout << "Invalid index" << endl;
//       return;
//     }
//     if (index == 0) {
//       Node *temp = head;
//       head = head->next;
//       delete temp;
//       return;
//     }
//     Node *temp = head;
//     for (int i = 0; i < index - 1; i++) {
//       temp = temp->next;
//       if (temp == NULL) {
//         cout << "Invalid index" << endl;
//         return;
//       }
//     }
//     temp->next = temp->next->next;
//   }

//   void addNode(int index, int data) {
//     if (index < 0) {
//       cout << "Invalid index" << endl;
//       return;
//     }
//     Node *newNode = new Node();
//     newNode->data = data;
//     newNode->next = NULL;
//     if (index == 0) {
//       newNode->next = head;
//       head = newNode;
//       return;
//     }
//     Node *temp = head;
//     for (int i = 0; i < index - 1; i++) {
//       temp = temp->next;
//       if (temp == NULL) {
//         cout << "Invalid index" << endl;
//         return;
//       }
//     }
//     if (temp == tail) {
//       temp->next = newNode;
//       tail = newNode;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
//   }

//   void addFirst(int data) { addNode(0, data); }

//   void addLast(int data) {
//     Node *newNode = new Node();
//     newNode->data = data;
//     newNode->next = NULL;
//     tail->next = newNode;
//   }

//   void removeFirst() { removeNode(0); }

//   void removeLast() {
//     Node *temp = tail;
//     temp->prev->next = NULL;
//     delete temp;
//   }

//   void printList() {
//     Node *temp = head;
//     while (temp != NULL) {
//       cout << temp->data << " ";
//       temp = temp->next;
//     }
//     cout << endl;
//   }
// };

// int main() {
//   DoublyLinkedList list;
//   list.addFirst(0);
//   // list.addLast(2);
//   list.addNode(1, 1);
//   list.printList();
//   return 0;
// }
