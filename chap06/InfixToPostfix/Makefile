InfixToPostfix: InfixToPostfix.o InfixToPostfixMain.o ListBaseStack.o
	gcc -o InfixToPostfix InfixToPostfix.o InfixToPostfixMain.o ListBaseStack.o
InfixToPostfix.o: InfixToPostfix.c
	gcc -c InfixToPostfix.c InfixToPostfix.h
InfixToPostfixMain.o: InfixToPostfixMain.c
	gcc -c InfixToPostfixMain.c
ListBaseStack.o: ListBaseStack.c
	gcc -c ListBaseStack.c ListBaseStack.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf InfixToPostfix
