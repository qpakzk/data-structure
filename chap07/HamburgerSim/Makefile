HamburgerSim: HamburgerSim.o CircularQueue.o
	gcc -o HamburgerSim HamburgerSim.o CircularQueue.o
CircularQueue.o: CircularQueue.c
	gcc -c CircularQueue.c CircularQueue.h
HamburgerSim.o: HamburgerSim.c
	gcc -c HamburgerSim.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf HamburgerSim