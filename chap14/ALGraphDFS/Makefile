ALGraphDFS: ALGraphDFS.o DFSMain.o ArrayBaseStack.o DLinkedList.o
	gcc -o ALGraphDFS ALGraphDFS.o DFSMain.o ArrayBaseStack.o DLinkedList.o
ALGraphDFS.o: ALGraphDFS.c
	gcc -c ALGraphDFS.c ALGraphDFS.h
DFSMain.o: DFSMain.c
	gcc -c DFSMain.c
ArrayBaseStack.o: ArrayBaseStack.c
	gcc -c ArrayBaseStack.c ArrayBaseStack.h
DLinkedList.o: DLinkedList.c
	gcc -c DLinkedList.c DLinkedList.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf ALGraphDFS