DBDLinkedList: DBDLinkedList.o DBDLinkedListMain.o
	gcc -o DBDLinkedList DBDLinkedList.o DBDLinkedListMain.o
DBDLinkedList.o: DBDLinkedList.c
	gcc -c DBDLinkedList.c DBDLinkedList.h
DBDLinkedListMain.o: DBDLinkedListMain.c
	gcc -c DBDLinkedListMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf DBDLinkedList