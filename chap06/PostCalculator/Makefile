PostCalculator: PostCalculator.o ListBaseStack.o PostCalculatorMain.o
	gcc -o PostCalculator PostCalculator.o PostCalculatorMain.o ListBaseStack.o
PostCalculator.o: PostCalculator.c
	gcc -c PostCalculator.c PostCalculator.h
PostCalculatorMain.o: PostCalculatorMain.c
	gcc -c PostCalculatorMain.c
ListBaseStack.o: ListBaseStack.c
	gcc -c ListBaseStack.c ListBaseStack.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf PostCalculator

