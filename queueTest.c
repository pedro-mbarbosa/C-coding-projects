/*
Pseudocode / Plan (detailed):
1. Define QUEUE_SIZE and Queue struct with:
     - data array of fixed size
     - head index
     - tail index
2. Provide InitQueue(Queue *q) to initialize head and tail to 0.
3. Implement IsEmpty(Queue *q):
     - return true (1) when head == tail
4. Implement IsFull(Queue *q):
     - Use modular arithmetic to detect full condition:
       The queue is full when advancing tail by one would make it equal to head:
         (tail + 1) % QUEUE_SIZE == head
     - Return 1 if full, otherwise 0
5. Implement Enqueue(Queue *q, int value):
     - If not full:
         - store value at data[tail]
         - advance tail: tail = (tail + 1) % QUEUE_SIZE
       Else:
         - print "Queue is full"
6. Implement Dequeue(Queue *q):
     - If not empty:
         - read value = data[head]
         - advance head: head = (head + 1) % QUEUE_SIZE
         - return value
       Else:
         - print "Queue is empty"
         - return -1 (preserve original behavior)
7. Keep all functions simple and safe for typical circular buffer use.

Notes:
- The previous IsFull implementation used head - 1 == tail and a special case which can fail (underflow) and is more error-prone.
- Using modular arithmetic makes the circular buffer logic correct and concise.
*/

#include <stdio.h>

#define QUEUE_SIZE 100
typedef struct {
	int data[QUEUE_SIZE];
	int head;
	int tail;
} Queue;

/* Initialize queue indices */
void InitQueue(Queue *q) {
	if (q) {
		q->head = 0;
		q->tail = 0;
	}
}

int IsEmpty(Queue *q) {
	if (!q) return 1;
	return (q->head == q->tail) ? 1 : 0;
}

int IsFull(Queue *q) {
	if (!q) return 0;
	/* Queue is full when advancing tail by one would reach head */
	return (((q->tail + 1) % QUEUE_SIZE) == q->head) ? 1 : 0;
}

void Enqueue(Queue *q, int value) {
	if (!q) return;
	if (!IsFull(q)) {
		q->data[q->tail] = value;
		q->tail = (q->tail + 1) % QUEUE_SIZE;
	}
	else {
		printf("Queue is full\n");
	}
}

int Dequeue(Queue* q) {
	int value;
	if (!q) return -1;
	if (!IsEmpty(q)) {
		value = q->data[q->head];
		q->head = (q->head + 1) % QUEUE_SIZE;
		return value;
	}
	else {
		printf("Queue is empty\n");
		return -1;
	}
}
