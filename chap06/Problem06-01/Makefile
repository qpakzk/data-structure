CLLBaseStack: CLLBaseStackMain.o CLLBaseStack.o CLinkedList.o
	gcc -o CLLBaseStack CLLBaseStackMain.o CLLBaseStack.o CLinkedList.o
CLLBaseStack.o: CLLBaseStack.c
	gcc -c CLLBaseStack.c CLLBaseStack.h
CLLBaseStackMain.o: CLLBaseStackMain.c
	gcc -c CLLBaseStackMain.c 
CLinkedList.o: CLinkedList.c
	gcc -c CLinkedList.c CLinkedList.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf CLLBaseStack
