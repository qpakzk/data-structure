InfixCalculator: InfixToPostfix.o PostCalculator.o InfixCalculator.o ListBaseStack.o InfixCalculatorMain.o
	gcc -o InfixCalculator InfixToPostfix.o PostCalculator.o  InfixCalculator.o ListBaseStack.o InfixCalculatorMain.o
InfixToPostfix.o: InfixToPostfix.c
	gcc -c InfixToPostfix.c InfixToPostfix.h
PostCalculator.o: PostCalculator.c
	gcc -c PostCalculator.c PostCalculator.h
InfixCalculator.o: InfixCalculator.c
	gcc -c InfixCalculator.c InfixCalculator.h
ListBaseStack.o: ListBaseStack.c
	gcc -c ListBaseStack.c ListBaseStack.h
InfixCalculatorMain.o: InfixCalculatorMain.c
	gcc -c InfixCalculatorMain.c

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf InfixCalculator

