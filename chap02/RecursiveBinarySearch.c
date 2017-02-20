#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target) {
	int mid;
	if(first > last)
		return -1;

	mid = (first + last) / 2;
	if(ar[mid] == target)
		return mid;
	else if(ar[mid] > target)
		return BSearchRecur(ar, first, mid-1, target);
	else
		return BSearchRecur(ar, mid+1, last, target); 	
}

int main(void) {
	int idx;
	int arr[] = {1, 3, 5, 7, 9};

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, 7);
	if(idx == -1)
		printf("탐색실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, 4);
	if(idx == -1)
		printf("탐색실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

}
