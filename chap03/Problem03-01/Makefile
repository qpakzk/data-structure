List: ListMain.o ArrayList.o
	gcc -o List ListMain.o ArrayList.o
ArrayList.o: ArrayList.c
	gcc -c ArrayList.c ArrayList.h
ListMain.o: ListMain.c
	gcc -c ListMain.c

clear:
	rm -rf *.o
	rm -rf *.gch
	rm -rf List