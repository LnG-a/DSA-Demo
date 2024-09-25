#include "LLStack.h"

LLStack::LLStack() {}

void LLStack::push(int data) { linkedList.addFirst(data); }

int LLStack::pop() { return linkedList.removeFirst(); }

int LLStack::top() { return linkedList.getNode(0); }

bool LLStack::isEmpty() { return linkedList.isEmpty(); }