BinarySearchTree: BinarySearchTree.o BinarySearchTreeMain.o BinaryTree2.o
	gcc -o BinarySearchTree BinarySearchTree.o BinarySearchTreeMain.o BinaryTree2.o
BinarySearchTree.o: BinarySearchTree.c
	gcc -c BinarySearchTree.c BinarySearchTree.h
BinarySearchTreeMain.o: BinarySearchTreeMain.c
	gcc -c BinarySearchTreeMain.c
BinaryTree2.o: BinaryTree2.c
	gcc -c BinaryTree2.c BinaryTree2.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf BinarySearchTree
