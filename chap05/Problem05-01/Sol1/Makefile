CList: CLinkedList.o EmployeeMain.o
	gcc -o CList CLinkedList.o EmployeeMain.o
CLinkedList.o: CLinkedList.c
	gcc -c CLinkedList.c CLinkedList.h
EmployeeMain.o: EmployeeMain.c
	gcc -c EmployeeMain.c Employee.h
clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf CList