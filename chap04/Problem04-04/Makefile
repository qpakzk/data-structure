PointDLinkedList: DLinkedList.o Point.o PointListMain.o
	gcc -o PointDLinkedList DLinkedList.o Point.o PointListMain.o
DLinkedList.o: DLinkedList.c
	gcc -c DLinkedList.c DLinkedList.h
Point.o: Point.c
	gcc -c Point.c Point.h
PointListMain.o: PointListMain.c
	gcc -c PointListMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf PointDLinkedList
