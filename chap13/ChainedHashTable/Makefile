ChainedTable: ChainedTableMain.o DLinkedList.o Person.o Table2.o
	gcc -o ChainedTable ChainedTableMain.o DLinkedList.o Person.o Table2.o
ChainedTableMain.o: ChainedTableMain.c
	gcc -c ChainedTableMain.c
DLinkedList.o: DLinkedList.c
	gcc -c DLinkedList.c DLinkedList.h
Person.o: Person.c
	gcc -c Person.c Person.h
Table2.o: Table2.c
	gcc -c Table2.c Table2.h slot2.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf ChainedTable
