#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "CLinkedList.h"
#include "Employee.h"

char *WhoIsTurn(List *plist, char *name, int day) {
	int i, j;

	Employee *p = (Employee *)malloc(sizeof(Employee));
	LFirst(plist, &p);
	if(!strcmp(p->name, name)) {
		for(j = 0; j < day; j++) {
			LNext(plist, &p);
		}
		return p->name;
	}
	for(i = 0; i < LCount(plist) - 1; i++) {
		LNext(plist, &p);
		if(!strcmp(p->name, name)) {
			for(j = 0; j < day; j++) {
				LNext(plist, &p);
			}
		}
	}

	return p->name;
}


int main(void) {
	Employee employee[] = {{1, "A"}, {2, "B"},{3, "C"}, {4, "D"}}, *p = employee;
	int i;
	List list;
	ListInit(&list);

	for(i = 0; i < sizeof(employee) / sizeof(Employee); i++, p++) {
		LInsert(&list, p);
	}

	if(LFirst(&list, &p)) {
		printf("[사번]: %d\n", p->num);
		printf("[이름]: %s\n\n", p->name);

		for(i = 0; i < LCount(&list) * 3 - 1; i++) {
			if(LNext(&list, &p)) {
				printf("[사번]: %d\n", p->num);
				printf("[이름]: %s\n\n", p->name);
			}
		}
	}
	printf("\n");

	printf("%s이(가) 당직을 선 후로 %d일 뒤에 당직을 서는 사람: %s\n", employee[1].name, 10, WhoIsTurn(&list, employee[1].name, 10));

	return 0;
}
