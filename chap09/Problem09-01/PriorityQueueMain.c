#include <stdio.h>
#include <string.h>
#include "PriorityQueue.h"

int DataPriorityComp(char *ch1, char *ch2) {
	int ch1_len = strlen(ch1);
	int ch2_len = strlen(ch2);
	return ch2_len - ch1_len;
}

int main(void) {
	PQueue pq;
	PQueueInit(&pq, DataPriorityComp);

	PEnqueue(&pq, "Good Morning");
	PEnqueue(&pq, "I am a boy");
	PEnqueue(&pq, "Priority Queue");
	PEnqueue(&pq, "Do you like coffee");
	PEnqueue(&pq, "I am so happy");

	while(!PQIsEmpty(&pq)) 
		printf("%s\n", PDequeue(&pq));

	return 0;
}
