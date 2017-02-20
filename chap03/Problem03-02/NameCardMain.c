#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

int main(void) {
	NameCard *nameCard;
	List list;
	ListInit(&list);

	nameCard = MakeNameCard("홍길동", "010-1234-5678"); 
	LInsert(&list, nameCard);
	nameCard = MakeNameCard("한석봉", "010-9012-3456"); 
	LInsert(&list, nameCard);
	nameCard = MakeNameCard("이순신", "010-0987-6543");
	LInsert(&list, nameCard);
	
	printf("이순신 정보 출력\n");
	if(LFirst(&list, &nameCard)) {
		if(!NameCompare(nameCard, "이순신"))
		   ShowNameCardInfo(nameCard);
		
		while(LNext(&list, &nameCard)) {
			if(!NameCompare(nameCard, "이순신"))
				ShowNameCardInfo(nameCard);
		}	
	}	
	printf("\n");


	printf("한석봉 전화번호 변경\n");
	printf("한석봉의 이전 전화번호: 010-9012-3456\n");
	if(LFirst(&list, &nameCard)) {
		if(!NameCompare(nameCard, "한석봉"))
		   ChangePhoneNum(nameCard, "010-1029-3847");
		
		while(LNext(&list, &nameCard)) {
			if(!NameCompare(nameCard, "한석봉"))
				ChangePhoneNum(nameCard, "010-1029-3847");
		}	
	}	
	printf("\n");
	
	printf("홍길동 정보 삭제\n");
	if(LFirst(&list, &nameCard)) {
		if(!NameCompare(nameCard, "홍길동")) {
			nameCard = LRemove(&list);
			free(nameCard);
		}

		while(LNext(&list, &nameCard)) {
			if(!NameCompare(nameCard, "홍길동")) {
				nameCard = LRemove(&list);
				free(nameCard);
			}
		}
	}
	printf("\n");

	printf("전체 결과 출력\n");
	if(LFirst(&list, &nameCard)) {
	    ShowNameCardInfo(nameCard);

		while(LNext(&list, &nameCard)) {
			ShowNameCardInfo(nameCard);
		}	
	}	

	return 0;
}
