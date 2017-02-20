BinaryTree: BinaryTree.o BinaryTreeMain.o
	gcc -o BinaryTree BinaryTree.o BinaryTreeMain.o
BinaryTree.o: BinaryTree.c
	gcc -c BinaryTree.c BinaryTree.h
BinaryTreeMain.o: BinaryTreeMain.c
	gcc -c BinaryTreeMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf BinaryTree