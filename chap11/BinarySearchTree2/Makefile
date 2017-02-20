BinarySearchTree: BinarySearchTree.o BinarySearchTreeDelMain.o BinaryTree.o
	gcc -o BinarySearchTree BinarySearchTree.o BinarySearchTreeDelMain.o BinaryTree.o
BinarySearchTree.o: BinarySearchTree.c
	gcc -c BinarySearchTree.c BinarySearchTree.h
BinarySearchTreeDelMain.o: BinarySearchTreeDelMain.c
	gcc -c BinarySearchTreeDelMain.c
BinaryTree.o: BinaryTree.c
	gcc -c BinaryTree.c BinaryTree.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf BinarySearchTree
