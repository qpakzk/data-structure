#include <stdio.h>

typedef struct _empInfo {
	int empNum;
	int age;
} EmpInfo;

int GetHashValue(int empNum) {
	return empNum % 100;
}

int main(void) {
	EmpInfo empInfoArr[1000];

	EmpInfo emp1 = {20120003, 42};
	EmpInfo emp2 = {20130012, 33};
	EmpInfo emp3 = {20170049, 27};

	EmpInfo r1, r2, r3;

	empInfoArr[GetHashValue(emp1.empNum)] = emp1;	
	empInfoArr[GetHashValue(emp2.empNum)] = emp2;	
	empInfoArr[GetHashValue(emp3.empNum)] = emp3;	

	r1 = empInfoArr[GetHashValue(20120003)];
	r2 = empInfoArr[GetHashValue(20130012)];
	r3 = empInfoArr[GetHashValue(20170049)];

	printf("사번 %d, 나이 %d\n", r1.empNum, r1.age);
	printf("사번 %d, 나이 %d\n", r2.empNum, r2.age);
	printf("사번 %d, 나이 %d\n", r3.empNum, r3.age);

	return 0;
}
