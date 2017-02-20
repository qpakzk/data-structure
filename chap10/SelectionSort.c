#include <stdio.h>

void SelSort(int arr[], int n) {
	int i, j;
	int maxIdx;
	int temp;
	for(i = 0; i < n - 1; i++) {
		maxIdx = i;
		for(j = i + 1; j < n; j++) {
			if(arr[j] < arr[maxIdx])
				maxIdx = j;
		}
		temp = arr[maxIdx];
		arr[maxIdx] = arr[i];
		arr[i] = temp;
	}
}

int main(void) {
	int arr[] = {3, 4, 2, 1};
	int i;
	
	SelSort(arr, sizeof(arr) / sizeof(arr[0]));

	for(i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
