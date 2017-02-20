Kruskal: KruskalMain.o ALGraphKruskal.o DLinkedList.o ArrayBaseStack.o PriorityQueue.o UsefulHeap.o
	gcc -o Kruskal KruskalMain.o ALGraphKruskal.o DLinkedList.o ArrayBaseStack.o PriorityQueue.o UsefulHeap.o
KruskalMain.o: KruskalMain.c
	gcc -c KruskalMain.c
ALGraphKruskal.o: ALGraphKruskal.c
	gcc -c ALGraphKruskal.c ALGraphKruskal.h
DLinkedList.o: DLinkedList.c
	gcc -c DLinkedList.c DLinkedList.h
ArrayBaseStack.o: ArrayBaseStack.c
	gcc -c ArrayBaseStack.c ArrayBaseStack.h
PriorityQueue.o: PriorityQueue.c
	gcc -c PriorityQueue.c PriorityQueue.h
UsefulHeap.o: UsefulHeap.c
	gcc -c UsefulHeap.c UsefulHeap.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf Kruskal
