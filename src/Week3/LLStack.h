#ifndef LLSTACK_H
#define LLSTACK_H
#include "SLinkedList.h"

class LLStack {
private:
  SLinkedList linkedList;

public:
  LLStack();
  void push(int data);
  int pop();
  int top();
  bool isEmpty();
};
#endif
