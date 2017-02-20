#include <stdio.h>
#include "ArrayList.h"

int main(void) {

	//ArrayList의 생성 및 초기화
	int data;
	List list;
	ListInit(&list);

	//5개 데이터 저장
	LInsert(&list, 11);
	LInsert(&list, 11);
	LInsert(&list, 22);
	LInsert(&list, 22);
	LInsert(&list, 33);

	//저장된 데이터의 전체 출력
	printf("현재 데이터의 수 : %d\n", LCount(&list));
	if(LFirst(&list, &data)) {
		printf("%d ", data);

		while(LNext(&list, &data)) {
			printf("%d ", data);
		}
	}	
	printf("\n\n");

	//숫자 22를 탐색하여 모두 삭제
	if(LFirst(&list, &data)) {
		if(data == 22)
			LRemove(&list);

		while(LNext(&list, &data)) {
			if(data == 22)
				LRemove(&list);
		}
	}

	//삭제 후 남은 데이터 전체 출력
	printf("현재 데이터의 수 : %d\n", LCount(&list));
	if(LFirst(&list, &data)) {
		printf("%d ", data);

		while(LNext(&list, &data)) {
			printf("%d ", data);
		}
	}	
	printf("\n\n");

	return 0;
}
