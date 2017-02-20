DLinkedListSort: DLinkedList.o DLinkedListSortMain.o
	gcc -o DLinkedListSort DLinkedList.o DLinkedListSortMain.o
DLinkedList.o: DLinkedList.c 
	gcc -c DLinkedList.c DLinkedList.h
DLinkedListSortMain.o: DLinkedListSortMain.c
	gcc -c DLinkedListSortMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf DLinkedListSort

