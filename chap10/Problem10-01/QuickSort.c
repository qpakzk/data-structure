#include <stdio.h>

void Swap(int arr[], int idx1, int idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int MedianOfThree(int arr[], int left, int right) {
	int samples[3] = {left, (left + right) / 2, right};
		
	if(arr[samples[0]] > arr[samples[1]])
		Swap(samples, 0, 1);

	if(arr[samples[0]] > arr[samples[2]]) 
		Swap(samples, 0, 2);

	if(arr[samples[1]] > arr[samples[2]])
		Swap(samples, 1, 2);

	return samples[1];
}
int Partition(int arr[], int left, int right) {
	int pIdx = MedianOfThree(arr, left, right);
	int pivot = arr[pIdx];
	int low = left + 1;
	int high = right;

	Swap(arr, left, pIdx);

	printf("피벗: %d\n", pivot);

	while(low <= high) {

		if(arr[low] <= pivot && low <= right)
			low++;

		if(arr[high] >= pivot && high >= (left + 1))
			high--;

		if(low <= high)
			Swap(arr, low, high);
	}
	
	Swap(arr, left, high);

	return high;
}

void QuickSort(int arr[], int left, int right) {
	if(left <= right) {
		
		int pivot = Partition(arr, left, right);
		QuickSort(arr, left, pivot - 1);
		QuickSort(arr, pivot + 1, right);
	}
}

int main(void) {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i;

	QuickSort(arr, 0, len - 1);

	for(i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
