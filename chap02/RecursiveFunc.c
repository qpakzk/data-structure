#include <stdio.h>

void RecursiveFunc(int num) {
	if(num <= 0)
		return;
	printf("Recursive call! %d\n", num);
	RecursiveFunc(num-1);	
}


int main(void) {
	RecursiveFunc(3);
	
	return 0;
}
