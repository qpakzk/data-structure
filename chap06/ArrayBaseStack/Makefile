ArrayBaseStack: ArrayBaseStack.o ArrayBaseStackMain.o
	gcc -o ArrayBaseStack ArrayBaseStack.o ArrayBaseStackMain.o
ArrayBaseStack.o: ArrayBaseStack.c
	gcc -c ArrayBaseStack.c ArrayBaseStack.h
ArrayBaseStackMain.o: ArrayBaseStackMain.c
	gcc -c ArrayBaseStackMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf ArrayBaseStack