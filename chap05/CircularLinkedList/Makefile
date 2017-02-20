CLinkedList: CLinkedList.o CLinkedListMain.o
	gcc -o CLinkedList CLinkedList.o CLinkedListMain.o
CLinkedList.o: CLinkedList.c
	gcc -c CLinkedList.c CLinkedList.h
CLinkedListMain.o: CLinkedListMain.c
	gcc -c CLinkedListMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf CLinkedList
