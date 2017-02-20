DBLinkedList: DBLinkedList.o DBLinkedListMain.o
	gcc -o DBLinkedList DBLinkedList.o DBLinkedListMain.o
DBLinkedList.o: DBLinkedList.c
	gcc -c DBLinkedList.c DBLinkedList.h
DBLinkedListMain.o: DBLinkedListMain.c
	gcc -c DBLinkedListMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf DBLinkedList