BinaryTree2: BinaryTree2.o BinaryTreeMain2.o
	gcc -o BinaryTree2 BinaryTree2.o BinaryTreeMain2.o
BinaryTree2.o: BinaryTree2.c
	gcc -c BinaryTree2.c BinaryTree2.h
BinaryTreeMain2.o: BinaryTreeMain2.c
	gcc -c BinaryTreeMain2.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf BinaryTree2