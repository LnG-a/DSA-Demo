#include "LLQueue.h"
#include "LLqueue.h"
#include "SLinkedList.h"
#include <iostream>

using namespace std;

int main() {
  LLQueue queue;
  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  queue.enqueue(4);
  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;
  cout << queue.dequeue() << endl;
  return 0;
}
