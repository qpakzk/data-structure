Expression: ExpressionMain.o ExpressionTree.o ListBaseStack.o BinaryTree2.o
	gcc -o Expression ExpressionMain.o ExpressionTree.o ListBaseStack.o BinaryTree2.o
ExpressionMain.o: ExpressionMain.c
	gcc -c ExpressionMain.c
ExpressionTree.o: ExpressionTree.c
	gcc -c ExpressionTree.c ExpressionTree.h
ListBaseStack.o: ListBaseStack.c
	gcc -c ListBaseStack.c ListBaseStack.h
BinaryTree2.o: BinaryTree2.c
	gcc -c BinaryTree2.c BinaryTree2.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf Expression
