ALGraphBFS: ALGraphBFS.o BFSMain.o CircularQueue.o DLinkedList.o
	gcc -o ALGraphBFS ALGraphBFS.o BFSMain.o CircularQueue.o DLinkedList.o
ALGraphBFS.o: ALGraphBFS.c
	gcc -c ALGraphBFS.c ALGraphBFS.h
BFSMain.o: BFSMain.c
	gcc -c BFSMain.c
CircularQueue.o: CircularQueue.c
	gcc -c CircularQueue.c CircularQueue.h
DLinkedList.o: DLinkedList.c
	gcc -c DLinkedList.c DLinkedList.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf ALGraphBFS