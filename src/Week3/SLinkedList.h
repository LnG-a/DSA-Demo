#ifndef SLinkedList_H
#define SLinkedList_H

class SLinkedList {
private:
  class Node {
  public:
    int data;
    Node *next;
  };

  Node *head;
  Node *tail;

public:
  SLinkedList();
  void addFirst(int data);
  void addLast(int data);
  void addNode(int index, int data);
  int removeFirst();
  int removeLast();
  int removeNode(int index);
  void editNode(int index, int data);
  int getNode(int index);
  void printList();
  bool isEmpty();
};

#endif