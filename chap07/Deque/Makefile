Deque: Deque.o DequeMain.o
	gcc -o Deque Deque.o DequeMain.o
Deque.o: Deque.c
	gcc -c Deque.c Deque.h
DequeMain.o: DequeMain.c
	gcc -c DequeMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf Deque