HeapSort: HeapSort.o UsefulHeap.o
	gcc -o HeapSort HeapSort.o UsefulHeap.o
HeapSort.o: HeapSort.c
	gcc -c HeapSort.c
UsefulHeap.o: UsefulHeap.c
	gcc -c UsefulHeap.c UsefulHeap.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf HeapSort