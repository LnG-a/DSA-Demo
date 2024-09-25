#include "LLQueue.h"

LLQueue::LLQueue() {}

void LLQueue::enqueue(int data) { linkedList.addLast(data); }

int LLQueue::dequeue() { return linkedList.removeFirst(); }

int LLQueue::peak() { return linkedList.getNode(0); }

bool LLQueue::isEmpty() { return linkedList.isEmpty(); }