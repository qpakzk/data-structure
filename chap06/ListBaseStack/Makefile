ListBaseStack: ListBaseStack.o ListBaseStackMain.o
	gcc -o ListBaseStack ListBaseStack.o ListBaseStackMain.o
ListBaseStack.o: ListBaseStack.c
	gcc -c ListBaseStack.c ListBaseStack.h
ListBaseStackMain.o: ListBaseStackMain.c
	gcc -c ListBaseStackMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf ListBaseStack
