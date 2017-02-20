CircularQueue: CircularQueue.o CircularQueueMain.o
	gcc -o CircularQueue CircularQueue.o CircularQueueMain.o
CircularQueue.o: CircularQueue.c
	gcc -c CircularQueue.c CircularQueue.h
CircularQueueMain.o: CircularQueueMain.c
	gcc -c CircularQueueMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf CircularQueue