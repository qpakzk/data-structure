ArrayListPoint: ArrayList.o Point.o PointListMain.o
	gcc -o ArrayListPoint ArrayList.o Point.o PointListMain.o
PointListMain.o: PointListMain.c
	gcc -c PointListMain.c

ArrayList.o: ArrayList.c
	gcc -c ArrayList.c ArrayList.h

Point.o: Point.c
	gcc -c Point.c Point.h

clear:
	rm -rf *.o
	rm -rf *.gch
	rm ArrayListPoint