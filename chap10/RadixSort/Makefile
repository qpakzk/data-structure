RadixSort: RadixSort.o ListBaseQueue.o
	gcc -o RadixSort RadixSort.o ListBaseQueue.o
RadixSort.o: RadixSort.c
	gcc -c RadixSort.c
ListBaseQueue.o: ListBaseQueue.c
	gcc -c ListBaseQueue.c ListBaseQueue.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf RadixSort