#include "SLinkedList.h"
#include <iostream>

using namespace std;

SLinkedList::SLinkedList() : head(NULL) {}

bool SLinkedList::isEmpty() { return head == NULL; }

int SLinkedList::getNode(int index) {
  if (index < 0) {
    cout << "Invalid index" << endl;
    return -1;
  }
  Node *temp = head;
  for (int i = 0; i < index; i++) {
    temp = temp->next;
    if (temp == NULL) {
      cout << "Invalid index" << endl;
      return -1;
    }
  }
  return temp->data;
}

void SLinkedList::editNode(int index, int data) {
  if (index < 0) {
    cout << "Invalid index" << endl;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < index; i++) {
    temp = temp->next;
    if (temp == NULL) {
      cout << "Invalid index" << endl;
      return;
    }
  }
  temp->data = data;
}

int SLinkedList::removeNode(int index) {
  int data;
  if (index < 0) {
    cout << "Invalid index" << endl;
    return -1;
  }
  if (index == 0) {
    data = head->data;
    head = head->next;
    return data;
  }
  Node *temp = head;
  for (int i = 0; i < index - 1; i++) {
    temp = temp->next;
    if (temp == NULL) {
      cout << "Invalid index" << endl;
      return -1;
    }
  }
  data = temp->next->data;
  temp->next = temp->next->next;
  return data;
}

void SLinkedList::addNode(int index, int data) {
  if (index < 0) {
    cout << "Invalid index" << endl;
    return;
  }
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = NULL;
  if (index == 0) {
    newNode->next = head;
    head = newNode;
    return;
  }
  Node *temp2 = head;
  for (int i = 0; i < index - 1; i++) {
    temp2 = temp2->next;
    if (temp2 == NULL) {
      cout << "Invalid index" << endl;
      return;
    }
  }
  newNode->next = temp2->next;
  temp2->next = newNode;
}

void SLinkedList::addFirst(int data) { addNode(0, data); }

void SLinkedList::addLast(int data) {
  if (isEmpty()) {
    addNode(0, data);
    return;
  }
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = NULL;
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
}

int SLinkedList::removeFirst() { return removeNode(0); }

int SLinkedList::removeLast() {
  Node *temp = head;
  if (temp->next == NULL) {
    head = NULL;
  }
  while (temp->next->next != NULL) {
    temp = temp->next;
  }
  int data = temp->next->data;
  temp->next = NULL;
  return data;
}

void SLinkedList::printList() {
  cout << "Linked List: ";
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}