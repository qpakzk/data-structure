#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.h"
#include "Employee.h"

Employee *WhosNightDuty(List *plist, char *name, int day);
void ShowEmployeeInfo(Employee *emp);

int main(void) {
	Employee *pemp;
	int i;

	List list;
	ListInit(&list);
	
	pemp = (Employee *)malloc(sizeof(Employee));
	pemp->empNum = 1111;
	strcpy(pemp->name, "Frodo");
	LInsert(&list, pemp);
		
	pemp = (Employee *)malloc(sizeof(Employee));
	pemp->empNum = 2222;
	strcpy(pemp->name, "Billy");
	LInsert(&list, pemp);

	pemp = (Employee *)malloc(sizeof(Employee));
	pemp->empNum = 3333;
	strcpy(pemp->name, "Eric");
	LInsert(&list, pemp);
		
	pemp = (Employee *)malloc(sizeof(Employee));
	pemp->empNum = 1111;
	strcpy(pemp->name, "David");
	LInsert(&list, pemp);

	pemp = WhosNightDuty(&list, "Billy", 3);
	ShowEmployeeInfo(pemp);

	pemp = WhosNightDuty(&list, "David", 15);
	ShowEmployeeInfo(pemp);

	if(LFirst(&list, &pemp)) {
		free(pemp);

		for(i = 0; i < LCount(&list) - 1; i++) {
			if(LNext(&list, &pemp))
				free(pemp);
		}
	}
	
	return 0;
}

Employee *WhosNightDuty(List *plist, char *name, int day) {
	Employee *ret;
	int i, num;

	num = LCount(plist);

	LFirst(plist, &ret);
	if(strcmp(ret->name, name) != 0) {
		for(i = 0; i < num - 1; i++) {
			LNext(plist, &ret);
			if(strcmp(ret->name, name) == 0) 
				break;
		}

		if(i >= num - 1) 
			return NULL;
	}

	for(i = 0; i < day; i++) {
		LNext(plist, &ret);	
	}

	return ret;
}

void ShowEmployeeInfo(Employee *emp) {
	printf("Employee name: %s\n", emp->name);
	printf("Employee number: %d\n\n", emp->empNum);
}
