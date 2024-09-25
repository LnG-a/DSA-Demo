#ifndef LLQueue_H
#define LLQueue_H
#include "SLinkedList.h"

class LLQueue {
private:
  SLinkedList linkedList;

public:
  LLQueue();
  void enqueue(int data);
  int dequeue();
  int peak();
  bool isEmpty();
};

#endif