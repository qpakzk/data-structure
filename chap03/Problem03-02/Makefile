NameCard: NameCardMain.o ArrayList.o NameCard.o
	gcc -o NameCard NameCard.o ArrayList.o NameCardMain.o
NameCardMain.o: NameCardMain.c
	gcc -c NameCardMain.c
NameCard.o: NameCard.c
	gcc -c NameCard.c NameCard.h
ArrayList.o: ArrayList.c 
	gcc -c ArrayList.c ArrayList.h
clear:
	rm -rf *.o
	rm -rf *.gch
	rm -rf NameCard