DLinkedList: DLinkedList.o DLinkedListMain.o
	gcc -o DLinkedList DLinkedList.o DLinkedListMain.o
DLinkedList.o: DLinkedList.c 
	gcc -c DLinkedList.c DLinkedList.h
DLinkedListMain.o: DLinkedListMain.c
	gcc -c DLinkedListMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf DLinkedList

