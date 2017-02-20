PriorityQueue: PriorityQueue.o PriorityQueueMain.o UsefulHeap.o
	gcc -o PriorityQueue PriorityQueue.o PriorityQueueMain.o UsefulHeap.o
PriorityQueue.o: PriorityQueue.c
	gcc -c PriorityQueue.c PriorityQueue.h
PriorityQueueMain.o: PriorityQueueMain.c
	gcc -c PriorityQueueMain.c
UsefulHeap.o: UsefulHeap.c
	gcc -c UsefulHeap.c UsefulHeap.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf PriorityQueue