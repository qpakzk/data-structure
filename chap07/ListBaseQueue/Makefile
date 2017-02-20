ListBaseQueue: ListBaseQueue.o ListBaseQueueMain.o
	gcc -o ListBaseQueue ListBaseQueue.o ListBaseQueueMain.o
ListBaseQueue.o: ListBaseQueue.c
	gcc -c ListBaseQueue.c ListBaseQueue.h
ListBaseQueueMain.o: ListBaseQueueMain.c
	gcc -c ListBaseQueueMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf ListBaseQueue