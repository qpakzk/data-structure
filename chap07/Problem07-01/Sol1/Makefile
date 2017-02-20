DequeBaseQueue: DequeBaseQueue.o DQBQueueMain.o Deque.o
	gcc -o DequeBaseQueue DequeBaseQueue.o DQBQueueMain.o Deque.o
Deque.o: Deque.c
	gcc -c Deque.c Deque.h
DequeBaseQueue.o: DequeBaseQueue.c
	gcc -c DequeBaseQueue.c DequeBaseQueue.h
DQBQueueMain.o: DQBQueueMain.c
	gcc -c DQBQueueMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf DequeBaseQueue