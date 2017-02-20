DequeBaseQueue: DequeBaseQueue.o DequeBaseQueueMain.o Deque.o
	gcc -o DequeBaseQueue DequeBaseQueue.o DequeBaseQueueMain.o Deque.o
Deque.o: Deque.c
	gcc -c Deque.c Deque.h
DequeBaseQueue.o: DequeBaseQueue.c
	gcc -c DequeBaseQueue.c DequeBaseQueue.h
DequeBaseQueueMain.o: DequeBaseQueueMain.c
	gcc -c DequeBaseQueueMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf DequeBaseQueue