ALGraph: ALGraph.o ALGraphMain.o DLinkedList.o
	gcc -o ALGraph ALGraph.o ALGraphMain.o DLinkedList.o
ALGraph.o: ALGraph.c
	gcc -c ALGraph.c ALGraph.h
ALGraphMain.o: ALGraphMain.c
	gcc -c ALGraphMain.c
DLinkedList.o: DLinkedList.c
	gcc -c DLinkedList.c DLinkedList.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf ALGraph