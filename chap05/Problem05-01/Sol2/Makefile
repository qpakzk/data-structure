Employee: NightDutyMain.o CLinkedList.o
	gcc -o Employee NightDutyMain.o CLinkedList.o
CLinkedList.o: CLinkedList.h
	gcc -c CLinkedList.c CLinkedList.h
NightDutyMain.o: NightDutyMain.c
	gcc -c NightDutyMain.c Employee.h

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf Employee
