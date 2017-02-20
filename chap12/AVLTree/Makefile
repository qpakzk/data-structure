AVLTree: AVLRebalance.o AVLTreeMain.o BinarySearchTree3.o BinaryTree3.o
	gcc -o AVLTree AVLRebalance.o AVLTreeMain.o BinarySearchTree3.o BinaryTree3.o
AVLRebalance.o: AVLRebalance.c
	gcc -c AVLRebalance.c AVLRebalance.h
AVLTreeMain.o: AVLTreeMain.c
	gcc -c AVLTreeMain.c
BinarySearchTree3.o: BinarySearchTree3.c
	gcc -c BinarySearchTree3.c BinarySearchTree3.h
BinaryTree3.o: BinaryTree3.c
	gcc -c BinaryTree3.c BinaryTree3.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf AVLTree

