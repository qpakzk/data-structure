SimpleHash: SimpleHashMain.o Person.o Table.o
	gcc -o SimpleHash SimpleHashMain.o Person.o Table.o
SimpleHashMain.o: SimpleHashMain.c
	gcc -c SimpleHashMain.c
Person.o: Person.c
	gcc -c Person.c Person.h
Table.o: Table.c
	gcc -c Table.c Table.h Slot.h
clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf SimpleHash