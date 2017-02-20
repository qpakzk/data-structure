#include <stdio.h>

int BinarySearch(int ar[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid;
	int opCount = 0;

	while(first <= last) {
		mid = (first + last) / 2;

		if(ar[mid] == target)
			return mid;
		else if(ar[mid] < target)
			first = mid + 1;
		else 
			last = mid - 1;
		
		opCount++;
	}

	printf("비교연산횟수 : %d\n", opCount);

	return -1;
}


int main(void) {

	int arr1[500] = {0};
	int arr2[5000] = {0};
	int arr3[50000] = {0};
	int idx;

	idx = BinarySearch(arr1, sizeof(arr1) / sizeof(arr1[0]), 1);
	if(idx == -1) {
		printf("탐색실패\n\n");
	}
	else {
		printf("타겟 저장 인덱스 : %d\n", idx);
	}

	idx = BinarySearch(arr2, sizeof(arr2) / sizeof(arr2[0]), 2);
	if(idx == -1) {
		printf("탐색실패\n\n");
	}
	else {
		printf("타겟 저장 인덱스 : %d\n", idx);
	}

	idx = BinarySearch(arr3, sizeof(arr3) / sizeof(arr3[0]), 3);
	if(idx == -1) {
		printf("탐색실패\n\n");
	}
	else {
		printf("타겟 저장 인덱스 : %d\n", idx);
	}

	return 0;
}
