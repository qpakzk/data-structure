#include <stdio.h>
#include "DequeBaseQueue.h"

int main(void) {
	Queue que;
	QueueInit(&que);

	Enqueue(&que, 1);Enqueue(&que, 2);
	Enqueue(&que, 3);Enqueue(&que, 4);
	Enqueue(&que, 5);Enqueue(&que, 6);

	while(!QIsEmpty(&que)) {
		printf("%d ", Dequeue(&que));
	}
	printf("\n");

	return 0;
}
