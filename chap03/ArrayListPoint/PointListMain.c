#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Point.h"

int main(void) {
	
	List list;
	Point compPos;
	Point *ppos;
	ListInit(&list);

	ppos = (Point *)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 1);
	LInsert(&list, ppos);

	ppos = (Point *)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = (Point *)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 1);
	LInsert(&list, ppos);

	ppos = (Point *)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 2);
	LInsert(&list, ppos);

	printf("현재 데이터의 수 : %d\n", LCount(&list));
	if(LFirst(&list, &ppos)) {
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos)) {
			ShowPointPos(ppos);
		}	
	}

	compPos.xpos = 2;
	compPos.ypos = 0;

	if(LFirst(&list, &ppos)) {
		if(PointComp(ppos, &compPos) == 1) {
			ppos = LRemove(&list);
			free(ppos);
		}

		while(LNext(&list, &ppos)) {
			if(PointComp(ppos, &compPos) == 1) {
				ppos = LRemove(&list);
				free(ppos);
			}
		}
	}

	printf("\n");

	printf("현재 데이터의 수 : %d\n", LCount(&list));
	if(LFirst(&list, &ppos)) {
		ShowPointPos(ppos);

		while(LNext(&list, &ppos)) {
			ShowPointPos(ppos);
		}		
	}

	return 0;
}
