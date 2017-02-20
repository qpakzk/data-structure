ArrayList: ArrayList.o ListMain.o
	gcc -o ArrayList ArrayList.o ListMain.o
ListMain.o: ListMain.c
	gcc -c ListMain.c

ArrayList.o: ArrayList.c
	gcc -c ArrayList.c ArrayList.h

clear:
	rm -rf *.o
	rm -rf *.gch
	rm ArrayList