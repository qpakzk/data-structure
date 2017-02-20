SimpleHeap: SimpleHeap.o SimpleHeapMain.o
	gcc -o SimpleHeap SimpleHeap.o SimpleHeapMain.o
SimpleHeap.o: SimpleHeap.c
	gcc -c SimpleHeap.c SimpleHeap.h
SimpleHeapMain.o: SimpleHeapMain.c
	gcc -c SimpleHeapMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf SimpleHeap