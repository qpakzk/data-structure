UsefulHeap: UsefulHeap.o UsefulHeapMain.o
	gcc -o UsefulHeap UsefulHeap.o UsefulHeapMain.o
UsefulHeap.o: UsefulHeap.c
	gcc -c UsefulHeap.c UsefulHeap.h
UsefulHeapMain.o: UsefulHeapMain.c
	gcc -c UsefulHeapMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf UsefulHeap